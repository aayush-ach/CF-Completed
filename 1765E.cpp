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
        ll n,a,b;
        cin>>n>>a>>b;
        if(a>b)
        {
            cout<<"1\n";
            continue;
        }
        ll ans = (n/a) + ((n%a)?1:0);
        cout<<ans<<"\n";
    }
    return 0;
}