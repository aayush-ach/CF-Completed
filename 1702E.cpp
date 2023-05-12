#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
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
        vector<pii> ab(n);
        for(int i = 0; i < n; i++){
            ll p1,p2;
            cin>>p1>>p2;
            pii p = {p1,p2};
            ab[i] = p;
        }
        set<ll> s1;
        set<ll> s2;
        int flag=1;
        for(int i = 0; i < n; i++){
            ll t1 = ab[i].first;
            ll t2 = ab[i].second;
            if(t1 == t2)
            {
                flag=0;
                break;
            }
            if(s1.find(t1) == s1.end())
            {
                if(s1.find(t2) == s1.end())
                {
                    s1.insert(t1);
                    s1.insert(t2);
                    continue;
                }
                if(s2.find(t1) == s2.end())
                {
                    if(s2.find(t2) == s2.end())
                    {
                        s2.insert(t1);
                        s2.insert(t2);
                        continue;
                    }
                }
            }
            else{
                if(s2.find(t1) == s2.end())
                {
                    if(s2.find(t2) == s2.end())
                    {
                        s2.insert(t1);
                        s2.insert(t2);
                        continue;
                    }
                }
            }
            flag=0;
            break;
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}