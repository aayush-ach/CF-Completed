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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int len = 2*n;
        vector<int> sublevel(n+1,0);
        int pt = 0;
        for(int i=0;i<len;i++)
        {
            if(s[i] == '(')
            {
                pt++;
            }
            else
            {
                if(i == len-1)
                {
                    if(!sublevel[pt])
                    {
                        sublevel[pt]++;
                    }
                }
                else
                {
                    if(s[i+1] == ')')
                    {
                        sublevel[pt]++;
                    }
                    pt--;
                }
                
            }
        }
        int connected = 0;
        for(int i=0;i<n+1;i++)
        {
            connected += sublevel[i];
        }
        cout<<connected<<"\n";

    }
    return 0;
}