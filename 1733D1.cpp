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
        ll n,x,y;
        cin>>n>>x>>y;
        string a,b;
        cin>>a>>b;
        ll cost = 0;
        vi indices;
        for(int i=0;i<n;i++)
        {
            if(a[i] != b[i])
            {
                indices.push_back(i);
            }
        }
        if(indices.size()%2)
        {
            cout<<"-1\n";
            continue;
        }
        if(indices.size() == 2)
        {
            if(indices[1] - indices[0] == 1)
            {
                cost += min(x,2*y);
            }
            else
            {
                cost += y;
            }
        }
        else
        {
            cost += (indices.size()/2)*y;
        }
        cout<<cost<<"\n";
    }
    return 0;
}