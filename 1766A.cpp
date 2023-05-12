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
        ll ans;
        if(n <= 10)
        {
            ans = n;
        }
        else if(n <= 100)
        {
            ans = 9;
            ans += n/10;
        }
        else if(n <= 1000)
        {
            ans = 18 + n/100;
        }
        else if(n <= 10000)
        {
            ans = 27 + n/1000;
        }
        else if(n <= 100000)
        {
            ans = 36 + n/10000;
        }
        else 
        {
            ans = 45 + n/100000;
        }
        cout<<ans<<"\n";
    }
    return 0;
}