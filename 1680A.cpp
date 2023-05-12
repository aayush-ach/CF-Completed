#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll l1,l2,r1,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1 > l2)
        {
            if(l1<=r2)
            {
                cout<<l1<<endl;
            }
            else
            {
                cout<<l1+l2<<endl;
            }
        }
        else if(l1 == l2)
        {
            cout<<l1<<endl;
        }
        else
        {
            if(l2<=r1)
            {
                cout<<l2<<endl;
            }
            else
            {
                cout<<l1+l2<<endl;
            }
        }
    }
}