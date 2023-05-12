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
        ll n;
        cin>>n;
        vector<int> h(n);
        for(int i = 0; i < n; i++){
            cin >> h[i];
        }
        ll ans=0;
        if(n%2)
        {
            for(int i = 1; i < n-1; i+=2){
                if(max(h[i-1],h[i+1]) - h[i] + 1>0)
                {
                    ans += max(h[i-1],h[i+1]) - h[i] + 1;
                }
            }
        }
        else
        {
            ll temp=0;
            ll min1 = LONG_LONG_MAX;
            for(int i = 1; i < n-2; i+=2){
                if(max(h[i-1],h[i+1]) - h[i] + 1 > 0)
                {
                    temp += max(0,(max(h[i-1],h[i+1]) - h[i] + 1));
                }
            }
            min1 = temp;
            for(int i = n-3; i >= 1; i-=2){
                temp = temp - max(0,(max(h[i-1],h[i+1]) - h[i] + 1)) + max(0,(max(h[i],h[i+2]) - h[i+1] + 1));
                min1 = min(min1,temp);
            }
            ans = min1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}