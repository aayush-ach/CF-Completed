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
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll maxi = 0;
        ll mini = 1000;
        ll test = 0;
        int mx = -1,mn = -1;
        for(int i=0;i<n;i++)
        {
            if(i)
            {
                test = max(-1*(a[i]-a[i-1]),test);
            }
            else
            {
                test = max((a[n-1]-a[0]),test);
            }
            if(a[i] > maxi)
            {
                maxi = a[i];
                mx = i;
            }
            if(a[i] < mini)
            {
                mn = i;
                mini = a[i];
            }
        }
        ll tmp = max(a[n-1] - mini, maxi - a[0]);
        cout<<max(tmp,test)<<"\n";
    }
    return 0;
}