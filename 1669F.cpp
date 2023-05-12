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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll l=0;
        ll alice=0;
        ll bob=0;
        ll r=n-1;
        int ans=0;
        while(r >= l)
        {
            if(alice > bob)
            {
                bob += a[r];
                r--;
            }
            else if(alice < bob)
            {
                alice += a[l];
                l++;
            }
            else if(alice == bob && (r-l)!=0)
            {
                alice += a[l];
                bob += a[r];
                r--;
                l++;
            }
            else
            {
                break;
            }
            if(alice == bob )
            {
                ans = l + (n-1-r);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}