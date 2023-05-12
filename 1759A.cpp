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
        string s;
        cin>>s;
        string sample = "Yes";
        int p ;
        if(s[0] == 'Y')
        {
            p = 0;
        }
        else if(s[0] == 'e')
        {
            p = 1;
        }
        else if(s[0] == 's')
        {
            p = 2;
        }
        else
        {
            cout<<"NO\n";
            continue;
        }
        int flag = 1;
        for(int i=1;i<s.length();i++)
        {
            p += 1;
            p = p%3;
            if(s[i] != sample[p])
            {
                flag=0;
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