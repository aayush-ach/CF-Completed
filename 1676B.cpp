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
        ll arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        ll min = arr[0];
        for(int i = 0; i < n; i++){
            if(min > arr[i])
            {
                min = arr[i];
            }
        }
        ll ans=0;
        for(int i = 0; i < n; i++){
            ans+=arr[i]-min;
        }
        cout<<ans<<endl;
    }
return 0;
}