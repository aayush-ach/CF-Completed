#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(m < n)
        {
            cout<<"No\n";
            continue;
        }
        if(n == 1)
        {
            cout<<"Yes\n"<<m<<"\n";
            continue;
        }
        int no1 = m%n;
        int no2 = m/n;
        int flag=0;
        for(int i = n;i >= 0;i--)
        {
            ll k = m - no2*i;
            if(n == i)
            {
                if(m%n == 0)
                {
                    flag=1;
                    cout<<"Yes\n";
                    for(int j=0;j<n;j++)
                    {
                        cout<<no2<<" ";
                    }
                    cout<<"\n";
                    break;
                }
                continue;
            }
            int no3 = k/(n-i);
            if(k%(n-i))
            {
                continue;
            }
            if(no3 < no2)
            {
                if((n-i)%2)
                {
                    continue;
                }
                flag=1;
                cout<<"Yes\n";
                for(int j=0;j<i;j++)
                {
                    cout<<no2<<" ";
                }
                for(int j=0;j<(n-i);j++)
                {
                    cout<<no3<<" ";
                }
                cout<<"\n";
                break;
            }
            else
            {
                if(i%2)
                {
                    continue;
                }
                flag=1;
                cout<<"Yes\n";
                for(int j=0;j<i;j++)
                {
                    cout<<no2<<" ";
                }
                for(int j=0;j<(n-i);j++)
                {
                    cout<<no3<<" ";
                }
                cout<<"\n";
                break;
            }
        }
        if(!flag)
        {
            cout<<"No\n";
        }
    }
    return 0;
}