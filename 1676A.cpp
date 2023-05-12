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
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll rsum=0;
        ll lsum=0;
        for( int i=0;i<3;i++)
        {
            rsum+=n%10;
            n/=10;
        }
        for( int i=0;i<3;i++)
        {
            lsum+=n%10;
            n/=10;
        }
        if(rsum == lsum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
return 0;
}