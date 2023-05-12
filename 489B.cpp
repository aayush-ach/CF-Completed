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
    ll n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll m;
    cin>>m;
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    ll ans=0;
    sort(all(a));
    sort(all(b));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(abs(a[i] - b[j])<=1)
            {
                ans++;
                b[j]=-1;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}