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
        int n,x,y;
        cin>>n>>x>>y;
        if (x && y || !x && !y)
        {
            cout<<"-1\n";
            continue;
        }
        int chk = (x == 0)?y:x;
        int tmp = (n-1)/chk;
        if(tmp*chk != n-1)
        {
            cout<<"-1\n";
            continue;
        }
        int winner = 1;
        int pt = 2;
        int count = chk;
        while(pt <= n)
        {
            if(count)
            {
                cout<<winner<<" ";
                pt++;
                count--;
            }
            else
            {
                winner = pt;
                cout<<winner<<" ";
                pt++;
                count = chk-1;
            }
        }
        cout<<"\n";
    }
    return 0;
}