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
    ll n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sum=0;
    for(int i = 0; i < n; i++){
        sum+=a[i];
    }
    int flag[n];
    ll def = 0;
    for(int i = 0; i < n; i++){
        flag[i] = 0;
    }
    vi changed;
    while(q--)
    {
        ll t;
        cin>>t;
        if(t == 1)
        {
            ll i,x;
            cin>>i>>x;
            if(flag[i-1] == 1 || def == 0)
            {
                sum += x - a[i-1];
                a[i-1] = x;
            }
            else
            {
                sum += x - def;
                a[i-1] = x;
            }
            changed.push_back(i-1);
            flag[i-1] = 1;
        } 
        else if(t == 2)
        {
            ll x;
            cin>>x;
            def = x;
            sum = x*n;
            while(changed.size() != 0)
            {
                flag[changed[changed.size()-1]] = 0;
                changed.pop_back();
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}