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
        string s;
        cin>>s;
        ll n = s.length();
        ll ans=0;
        int flag=0;
        int consec=0;
        int cur=0;
        while(cur < n && s[cur]!='0')
        {
            if(s[cur] == '?')
            {
                consec++;
            }
            else
            {
                consec=0;
                flag=1;
            }
            cur++;
        }
        if(cur == n)
        {
            if(s[cur-1] == '0')
            {
                ans++;
            }
        }
        else
        {
            ans++;
        }
        ans+=consec+flag;
        cout<<ans<<endl;
    }
    return 0;
}