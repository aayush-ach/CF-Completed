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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<pii> pairs;
        if(n == 1)
        {
            cout<<"0\n";
            continue;
        }
        if((a[0] + a[n-1])%2)
        {
            a[n-1] = a[0];
        }
        else
        {
            a[0] = a[n-1];
        }
        pairs.push_back({0,n-1});
        for(int i=1;i<n-1;i++)
        {
            int chk = a[0] + a[i];
            if(chk%2)
            {
                a[i] = a[0];
                pairs.push_back({0,i});
            }
            else
            {
                a[i] = a[0];
                pairs.push_back({i,n-1});
            }
        }
        int sz =pairs.size();
        cout<<sz<<"\n";
        for(int i=0;i<sz;i++)
        {
            cout<<pairs[i].first+1<<" "<<pairs[i].second+1<<"\n";
        }
    }
    return 0;
}