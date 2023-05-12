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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans=1,flag=0;
        ll l;
        if(n == 1)
        {
            ans=1;
        }
        else if(a[1] == a[0]+1)
        {
            l = a[0];
        }
        else 
        {
            flag=1;
            l = a[0]+1;
        }
        for(int i = 1; i < n; i++){
            if(abs(l-a[i]+i) > 1 && flag == 1)
            {
                ans=0;
                break;
            }
            else if(abs(l-a[i]+i) > 1)
            {
                flag=1;
                l+=1;
                if(abs(l-a[i]+i) > 1)
                {
                    ans=0;
                    break;
                }
            }
            else if(l+i-a[i] == 1)
            {
                flag=1;
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}