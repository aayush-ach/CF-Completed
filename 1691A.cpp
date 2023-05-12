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
        ll odd=0;
        ll even=0;
        for(int i = 0; i < n; i++){
            if(a[i]%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout<<min(even,odd)<<endl;
    }
    return 0;
}