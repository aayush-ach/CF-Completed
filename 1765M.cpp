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
        int flag=1;
        if(n == 1) flag=0;
        else
        {
            for(int i = 2; i*i <= n; i++){
                if(n%i == 0) 
                {   flag=0;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<"1 "<<n-1<<"\n";
            continue;
        }
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0)
            {
                cout<<n/i<<" "<<(n/i)*(i-1)<<"\n";
                break;
            }
        }
    }
    return 0;
}