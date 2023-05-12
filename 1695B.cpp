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
        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        if(n%2 == 1)
        {
            cout<<"Mike\n";
        }
        else
        {
            ll m_in=0;
            for(ll i = 0; i < n; i++){
                if(a[m_in] > a[i])
                {
                    m_in = i;
                }
                
            }
            if(m_in%2 == 0)
            {
                cout<<"Joe\n";
            }
            else
            {
                cout<<"Mike\n";
            }
        }
    }
    return 0;
}