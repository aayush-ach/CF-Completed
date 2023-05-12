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
        string s;
        cin>>s;
        if(n == 1)
        {
            cout<<"1"<<"\n";
        }
        else
        {
            ll ans = (n*(n+1))/2;
            for(int i = n-2; i >= 0; i--){
                if(s[i] == s[i+1])
                {
                    ans -= i+1;
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}