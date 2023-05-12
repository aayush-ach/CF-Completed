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
        ll n,k;
        cin>>n>>k;
        map<ll,ll> u;
        multimap<ll,ll> ru;
        for(int i = 0; i < n; i++){
            ll tmp;
            cin>>tmp;
            u.insert({i,tmp});
            ru.insert({tmp,i});
        }

        while(k--)
        {
            ll a,b;
            cin>>a>>b;
            auto it1 = ru.equal_range(a);
            if(it1.first == it1.second)
            {
                cout<<"NO\n";
                continue;
            }
            ll i = it1.first->second;
            auto it2 = ru.equal_range(b);
            if(it2.first == it2.second)
            {
                cout<<"NO\n";
                continue;
            }
            multimap<ll,ll>::iterator itr = it2.second;
            itr--;
            ll j = itr->second;
            if(i <= j)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}