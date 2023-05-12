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
        ll n,s;
        cin>>n>>s;
        vector<int> a(n);
        int sum=0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        int count=0;
        
        vi pre(n);
        pre[0] = a[0];
        for(int i = 1; i < n; i++){
            
            pre[i] = a[i] + pre[i-1];
        }
        int min=__INT_MAX__;
        int flag=0;
        vi::iterator low1;
        if(sum < s)
        {
            cout<<"-1\n";
            continue;
        }
        if(sum == s)
        {
            cout<<"0\n";
            continue;
        }
        low1 = upper_bound(all(pre),s);
        int j = low1 - pre.begin();
        if(low1 == pre.end())
        {
            j--;
        }
        if(min > n - j  )
        {
            min = n - j ;
        }
        for(int i = 0; i < n; i++){
            if(i>0 && pre[i] == pre[i-1])
            {
                continue;
            }
            low1 = upper_bound(all(pre),s+pre[i]);
            if(low1 != pre.end())
            {
                flag=1;
                j = low1 - pre.begin();
                if(min > i + n - j + 1)
                {
                    min = i + n - j + 1 ;
                }
            }
            else
            {
                if(pre[n-1] == s+pre[i])
                {
                    if(min > i + 1 )
                    {
                        min = i + 1 ;
                    }
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        count = min;
        cout<<count<<"\n";
    }
    return 0;
}