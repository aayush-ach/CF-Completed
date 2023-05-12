#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<ll,ll> m;
        map<ll,ll>::iterator itr;
        for(int i = 0; i < n; i++){
            itr = m.find(a[i]);
            if(itr == m.end())
            {
                m.insert({a[i],1});
            }
            else
            {
                itr->second++;
            }
        }
        set<ll> vis;
        vector<ll> in;
        for(int i = 0; i < n; i++){
            if(vis.find(a[i]) != vis.end())
            {
                continue;
            }
            vis.insert(a[i]);
            itr = m.find(a[i]);
            if(itr->second >= k)
            {
                in.push_back(a[i]);
            }
        }
        sort(all(in));
        ll l = -1;
        ll r = -1;
        ll cur=0;
        ll max=0;
        if(in.size() == 0)
        {
            cout<<"-1\n";
            continue;
        }
        if(in.size() == 1)
        {
            cout<<in[0]<<" "<<in[0]<<"\n";
            continue;
        }
        l = in[0];
        r = in[0];
        for(int i = 1; i < in.size(); i++){
            if(in[i] - in[i-1] == 1)
            {
                cur++;
                if(cur > max)
                {
                    l = in[i-cur];
                    r = in[i];
                    max = cur;
                }
            }
            else
            {
                cur=0;
            }
        }
        
        
        cout<<l<<" "<<r<<"\n";
        
    }
    return 0;
}