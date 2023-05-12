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
    ll power_two[52];
    power_two[0] = 1;
    for(int i = 1; i < 52; i++){
        power_two[i] = power_two[i-1]*2;
    }
    while(t--){
        int flag=0;
        string s;
        cin>>s;
        string t;
        cin>>t;
        if(t.length()>1)
        {
            for(int i=0;i<t.length();i++)
            {
                if(t[i] == 'a')
                {
                    cout<<"-1"<<endl;
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                cout<<power_two[s.length()]<<endl;
            }
        }
        else
        {
            if(t[0] == 'a')
            {
                cout<<"1"<<endl;
            }
            else
            {
                ll ans = power_two[s.length()];
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}