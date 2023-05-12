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
        ll n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll total=0;
        sort(all(a));
        for(int i = 1; i < n; i++){
            a[i] += a[i-1];
        }
        for(int i = 0; i < n; i++){
            if(a[i] > x)
            {
                break;
            }
            total += (x - a[i])/(i+1) + 1;
        }
        cout<<total<<endl;
    }
    return 0;
}