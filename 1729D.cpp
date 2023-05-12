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
        int n;
        cin>>n;
        vector<int> x(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        vector<int> y(n);
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        vi tot(n);
        for(int i = 0; i < n; i++){
            tot[i] = y[i]-x[i];
        }
        sort(all(tot));
        int p1 = 0;
        int p2 = n-1;
        int pairs = 0;
        while(p1 < p2)
        {
            if(tot[p1] + tot[p2] >= 0)
            {
                p1++;
                p2--;
                pairs++;
            }
            else
            {
                p1++;
            }
        }
        cout<<pairs<<"\n";
    }
    return 0;
}