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
        ll n;
        cin>>n;
        int inp[2][n];
        char temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp == '*')
            {
                inp[0][i] = 1;
            }
            else
            {
                inp[0][i] = 0;
            }
        }
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp == '*')
            {
                inp[1][i] = 1;
            }
            else
            {
                inp[1][i] = 0;
            }
        }
        ll top_count=0;
        ll top_left=-1;
        ll top_right=n;
        for(int i=0;i<n;i++)
        {
            top_count+=inp[0][i];
            if(inp[0][i] == 1)
            {
                top_right = i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(inp[0][i] == 1)
            {
                top_left= i;
                break;
            }
        }
        ll bot_count=0;
        ll bot_left=-1;
        ll bot_right=n;
        for(int i=0;i<n;i++)
        {
            bot_count+=inp[1][i];
            if(inp[1][i] == 1)
            {
                bot_right = i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(inp[1][i] == 1)
            {
                bot_left= i;
                break;
            }
        }
        ll ans=0;
        if(top_count > bot_count)
        {
            ans+=bot_count-1;
        }
        else
        {
            ans+=top_count-1;
        }
        ll mid = (min(top_right,bot_right) + max(top_left,bot_left))/2;
        ans+=
        cout<<ans<<endl;
    }
    return 0;
}