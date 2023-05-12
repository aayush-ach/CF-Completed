#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n][m];
        char temp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>temp;
                if(temp == 'E')
                {
                    arr[i][j] = 0;
                }
                else if(temp == 'R')
                {
                    arr[i][j] = 1;
                }
            }
        }
        ll high_row=-1;;
        ll high_col;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j] == 1)
                {
                    high_row = i;
                    high_col = j;
                    break;
                }
            }
            if(high_row!=-1)
            {
                break;
            }
        }
        int flag=0;
        for(int i=high_row+1;i<n;i++)
        {
            for(int j=0;j<high_col;j++)
            {
                if(arr[i][j] == 1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}