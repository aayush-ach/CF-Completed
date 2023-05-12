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
        ll arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        ll mx=0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ll temp=0;
                int row = i;
                int col = j;
                while(row>=0 && row<n && col>=0 && col<m)
                {
                    temp += arr[row][col];
                    row++;
                    col++;
                }
                row = i;
                col = j;
                while(row>=0 && row<n && col>=0 && col<m)
                {
                    temp += arr[row][col];
                    row--;
                    col--;
                }
                row = i;
                col = j;
                while(row>=0 && row<n && col>=0 && col<m)
                {
                    temp += arr[row][col];
                    row--;
                    col++;
                }
                row = i;
                col = j;
                while(row>=0 && row<n && col>=0 && col<m)
                {
                    temp += arr[row][col];
                    row++;
                    col--;
                }
                temp -= arr[i][j]*3;
                mx = max(mx,temp);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}