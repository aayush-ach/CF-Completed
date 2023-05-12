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
        ll n,m;
        cin>>n>>m;
        ll grid[n][m];
        char temp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>temp;
                if(temp == '.')
                {
                    grid[i][j] = 0;
                }
                else if(temp == '*')
                {
                    grid[i][j] = 1;
                }
                else if(temp == 'o')
                {
                    grid[i][j] = 2;
                }
            }
        }
        ll stones=0;
        for(int j = 0; j < m; j++){
            stones=0;
            for(int i = 0; i < n; i++){
                if(grid[i][j] == 1)
                {
                    stones++;
                }
                else if(grid[i][j] == 0)
                {
                    if(stones)
                    {
                        grid[i][j] = 1;
                        grid[i-stones][j] = 0;
                    }
                }
                else
                {
                    stones = 0;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 0)
                {
                    cout<<".";
                }
                else if(grid[i][j] == 1)
                {
                    cout<<"*";
                }
                else if(grid[i][j] == 2)
                {
                    cout<<"o";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}