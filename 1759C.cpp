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
        ll l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;
        if(a == b)
        {
            cout<<"0\n";
            continue;
        }
        if((abs(r-a) < x && abs(a-l) < x) || (abs(r-b) < x && abs(b-l) < x))
        {
            cout<<"-1\n";
            continue;
        }
        if(abs(a-b) >= x)
        {
            cout<<"1\n";
            continue;
        }
        if(a > b)
        {
            if(abs(a-r) >= x)
            {
                cout<<"2\n";
                continue;
            }
            if(abs(l-b) >= x)
            {
                cout<<"2\n";
                continue;
            }
            cout<<"3\n";
            continue;
        }
        if(b > a)
        {
            if(abs(a-l) >= x)
            {
                cout<<"2\n";
                continue;
            }
            if(abs(r-b) >= x)
            {
                cout<<"2\n";
                continue;
            }
            cout<<"3\n";
            continue;
        }
    }
    return 0;
}