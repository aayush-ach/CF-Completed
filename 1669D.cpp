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
        s[n] = 'W';
        vector<string> snips;
        ll prev = -1;
        string s1 = "";
        for(int i = 0; i <= n; i++){
            if(s[i] != 'W')
            {
                s1.append(1,s[i]);
                prev = i;
                continue;
            }
            if(s[i] == 'W')
            {
                if(prev == -1)
                {
                    continue;
                }
                snips.push_back(s1);
                
                s1 = "";
                prev = -1;
            }
        }
        int flag=1;
        for(int i = 0; i < snips.size(); i++){
            if(snips[i].length() == 1)
            {
                flag=0;
                break;
            }
            char fl='W';
            int f = 0;
            for(int j = 0; j < snips[i].length(); j++){
                
                if(fl == 'W')
                {
                    fl = snips[i][j];
                }
                else
                {
                    if(fl != snips[i][j])
                    {
                        f = 1;
                        break;
                    }
                }
            }
            if(!f)
            {
                flag = 0;
                break;
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