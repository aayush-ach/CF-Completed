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
            char temp;
            cin>>temp;
            a[i] = temp - '0';
        }
        vi b(n);
        if(a[0] == 9)
        {
            vi p(n+1,1);
            for(int i = n-1; i >= 0; i--){
                b[i] = p[i+1] - a[i];
                if(b[i] < 0)
                {
                    b[i] += 10;
                    p[i]--;
                }
            }
        }
        else
        {
            vi p(n,9);
            for(int i = n-1; i >= 0; i--){
                b[i] = 9 - a[i];
            }
        }
        for(int i = 0; i < n; i++){
            cout<<b[i];
        }
        cout<<"\n";
    }
    return 0;
}