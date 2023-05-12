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
    ll n,l;
    cin>>n>>l;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long double ans;
    sort(all(a));
    ll maxi=2*a[0];
    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] > maxi)
            maxi = a[i] - a[i-1];
    }
    if(2*(l - a[n-1]) > maxi)
        maxi = 2*(l - a[n-1]);
    ans = maxi/2.0;
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}