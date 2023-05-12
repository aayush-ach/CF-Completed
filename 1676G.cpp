#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007
ll ans=0;
ll dp(vi A[],ll node,string s)
{
    ll balance=0;
    if(s[node-1] == 'B')
    {
        balance=1;
    }
    else
    {
        balance=-1;
    }
    ll size = (A[node]).size();
    if(size == 0 )
    {
        return balance;
    }
    else
    {
        for(int i = 0; i < size; i++){
            balance += dp(A,A[node][i],s);
        }
        if(balance == 0)
        {
            ans++;
        }
        return balance;
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ans=0;
        ll n;
        cin>>n;
        vi children[n+1];
        for(int i = 2; i <= n; i++){
            ll temp;
            cin>>temp;
            children[temp].push_back(i);
        }
        string s;
        cin>>s;
        dp(children,1,s);
        cout<<ans<<endl;
    }
    return 0;
}