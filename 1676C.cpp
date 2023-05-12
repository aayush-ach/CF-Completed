#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

ll Diff(string w1,string w2,ll m)
{
    ll ans=0;
    for(int i = 0; i < m; i++){
        ans+=abs(w1[i]-w2[i]);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        string w[n];
        for(int i = 0; i < n; i++){
            cin>>w[i];
        }
        ll min = __INT_MAX__;
        for(int i = 0; i < n-1; i++){
            for(int j=i+1;j<n;j++){
                ll ans = Diff(w[i],w[j],m);
                if(ans < min)
                {
                    min = ans;
                }
            }
        }
        cout<<min<<endl;
    }
return 0;
}