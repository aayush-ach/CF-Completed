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
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vi b(n);
        b[0] = a[0];
        for(int i = 1; i < n; i++){
            b[i] = a[i] + b[i-1];
        }
        int flag=1;int cf=0;
        ll sum=0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            if(b[i] < 0)
            {
                flag=0;
                break;
            }
            else if(b[i] == 0)
            {
                cf = 1;
            }
            else if(cf==1)
            {
                flag=0;
                break;
            }
        }
        if(sum)
        {
            flag=0;
        }
        if(flag)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}