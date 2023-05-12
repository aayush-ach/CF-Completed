#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<ll> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vi a(n);
        int flag=1;
        for(int i = 0; i < n; i++){
            ll tmp = ((l-1)/(i+1) + 1)*(i+1);
            if(tmp > r)
            {
                flag=0;
                break;
            }
            a[i] = tmp;
        }
        if(flag)
        {
            cout<<"YES\n";
            for(int i = 0; i < n; i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}