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
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll min = __INT_MAX__;
    for(int i = 0; i <= n; i++){
        if(m*i <= n)
        {
            ll temp = b*i + (n-i*m)*a;
            if(temp < min)
            {
                min = temp;
            }
        }
        else
        {
            ll temp = b*i;
            if(temp < min)
            {
                min = temp;
            }
        }
    }
    cout<<min<<endl;
    return 0;
}