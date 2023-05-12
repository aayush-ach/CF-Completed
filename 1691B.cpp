#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> s(n);
        int flag=1;
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        map <int,int> a;
        map <int,int>::iterator itr;
        for(int i = 0; i < n; i++){
            a.insert({s[i],i});
        }
        vi freq[n];
        for(int i = 0; i < n; i++){
            itr = a.find(s[i]);
            freq[itr->second].push_back(i);
        }
        unordered_set <int> banned;
        vi ans(n);
        for(int i = 0; i < n; i++){
            if(banned.find(i) != banned.end())
            {
                continue;
            }
            itr = a.find(s[i]);
            ll size = freq[itr->second].size();
            if(freq[itr->second].size() == 1)
            {
                flag=0;
                break;
            }
            ans[freq[itr->second][0]] = freq[itr->second][size-1];
            for(int j = 1; j < size; j++){
                ans[freq[itr->second][j]] = freq[itr->second][j-1];
            }
            for(int j = 0; j < size; j++){
                banned.insert(freq[itr->second][j]);
            }
        }
        if(!flag)
        {
            cout<<"-1\n";
        }
        else{

        
            for(int i = 0; i < n; i++){
                cout<<ans[i]+1<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}