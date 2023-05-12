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
        string s;
        cin>>s;
        int count = 1;
        int flag=1;
        for(int i = 0; i < n; i++){
            if(count%2)
            {
                count++;
                continue;
            }
            else
            {
                if(s[i] != s[i+1])
                {
                    flag=0;
                    break;
                }
                i++;
                count++;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}