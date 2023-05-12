#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

ll Searcher(vi A,ll l,ll r,ll x)
{
    ll mid = l + (r-l)/2;
    if(l == r)
    {
        return l;
    }
    else if(l > r)
    {
        return -1;
    }
    if(x == A[mid])
    {
        return mid;
    }
    else if(x > A[mid])
    {
        if(x <= A[mid+1])
        {
            return mid+1;
        }
        return Searcher(A,mid+1,r,x);
    }
    else 
    {
        if(mid > 0)
        {
            if(x > A[mid-1] )
            {
                return mid;
            }
            else if(x == A[mid-1])
            {
                return mid-1;
            }
        }
        return Searcher(A,l,mid,x);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vi sugar;
        for(int i = 0; i < n; i++){
            ll temp;
            cin>>temp;
            sugar.push_back(temp);
        }
        sort(all(sugar),greater<int>());
        for(int i = 1; i < n; i++){
            sugar[i] += sugar[i-1];
        }
        while(q--)
        {
            ll x;
            cin>>x;
            ll i=0;
            if(sugar[n-1] < x)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                ll ans = Searcher(sugar,0,n-1,x);
                cout<<ans+1<<endl;
            }
        }
    }
return 0;
}