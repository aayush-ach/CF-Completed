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
        sort(all(a));
        int min=__INT_MAX__;
        for(int i = 1; i < n-1; i++){
            int cur = (abs(a[i] - a[i-1]) + abs(a[i] - a[i+1]));
            if(cur <= min)
            {
                min = cur;
            }
        }
        cout<<min<<"\n";
    }
    return 0;
}