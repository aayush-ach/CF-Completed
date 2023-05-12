#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> t(n);
        
        for(int i = 0; i < n; i++){
            char c;

            cin >> c;
            t[i] = c - '0';
            
        }
        ll cost = 0;
        vi tmp(n,0);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j+=i+1)
            {
                if(t[j])
                {
                    break;
                }
                else
                {
                    tmp[j] = i+1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cost += tmp[i];
        }
        cout<<cost<<"\n";
    }
    return 0;
}