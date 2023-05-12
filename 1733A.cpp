#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = k;i<n;i++)
        {
            int ind = ((i+1)%k) - 1;
            if(ind == -1)
            {
                ind += k;
            }
            if(a[ind] <= a[i])
            {
                a[ind] = a[i];
            }
        }
        ll score = 0;
        for(int i=0;i<k;i++)
        {
            score += a[i];
        }
        cout<<score<<"\n";
    }
    return 0;
}