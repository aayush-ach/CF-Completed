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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int op = 0;
        for(int i=1;i<n;i++)
        {
            int  j = a[i] - 1;
            j /= 2*a[0] - 1;
            op += j;
        }
        cout<<op<<"\n";
    }
    return 0;
}