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
        ll n,c;
        cin>>n>>c;
        vector<int> a(n);
        vi count(101,0);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
            count[a[i]]++;
        }
        ll cost = 0;
        for(int i=0;i<101;i++)
        {
            if(count[i] > c)
            {
                cost += c;
            }
            else
            {
                cost += count[i];
            }
        }
        cout<<cost<<"\n";
    }
    return 0;
}