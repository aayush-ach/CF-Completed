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
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(int i = 0; i < n; i++){
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll m_i = 0;
        ll m_j = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j] > a[m_i][m_j])
                {
                    m_i = i;
                    m_j = j;
                }
            }
        }
        ll h = max(m_i+1,n-m_i);
        ll w = max(m_j+1,m-m_j);
        ll ans = h*w;
        cout<<ans<<"\n";
    }
    return 0;
}