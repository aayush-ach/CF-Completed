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
        vector<int> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }
        ll ans = (1>>15) - 1;
        for(int i = 0; i < n; i++){
            if(p[i] != i)
            {
                ans = ans&p[i];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}