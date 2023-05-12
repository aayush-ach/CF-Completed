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
        ll n;
        cin>>n;
        vector<int> p(n+1);
        vi v(n+1,0);
        v[0] = 1;
        for(int i = 1; i <= n; i++){
            cin >> p[i];
            v[p[i]] = 1;
        }
        queue<ll> q;
        for(int i = 1; i <= n; i++){
            if(!v[i])
            {
                q.push(i);
            }
        }
        if(q.empty())
        {
            cout<<"1\n1\n1\n\n";
            continue;
        }
        vi vis(n+1,0);
        vector<vector<ll>> paths(n);
        ll g=0;
        while(!q.empty())
        {
            ll tmp = q.front();
            q.pop();
            while(!vis[tmp])
            {
                vis[tmp] = 1;
                if(p[tmp] == tmp)
                {
                    paths[g].push_back(tmp);
                    break;
                }
                paths[g].push_back(tmp);
                tmp = p[tmp];
            }
            g++;
        }
        cout<<g<<"\n";
        for(int i = 0; i < g; i++){
            cout<<paths[i].size()<<"\n";
            for(int j = paths[i].size()-1; j >= 0; j--){
                cout<<paths[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}