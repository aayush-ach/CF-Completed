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
        vector<int> a(n);
        int flag=1;
        int num_z = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0)
            {
                num_z++;
            }
        }
        vi b;
        for(int i = 0; i < n; i++){
            if(a[i] == 0)
            {
                continue;
            }
            b.push_back(a[i]);
        }
        for(int i = 0; i < min(2,num_z); i++){
            b.push_back(0);
        }
        n = b.size();
        if(n-num_z+2 >= 7)
        {
            cout<<"NO\n";
            continue;
        }
        multiset<ll> s;
        for(int i = 0; i < n; i++){
            s.insert(b[i]);
        }
        for(int i = 0; i < n-2; i++){
            for(int j = i+1; j < n-1; j++){
                for(int k = j+1; k < n; k++){
                    ll sum = b[i] + b[j] + b[k];
                    if(s.find(sum) == s.end())
                    {
                        flag=0;
                    }
                }
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}