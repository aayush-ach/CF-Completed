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
        int flag=1;
        int count[2] = {0,0};
        string s2;
        cin >> s2;
        if(s2[0] == 'B')
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i = 0; i < s2.length(); i++){
                if(s2[i] == 'A')
                {
                    count[0]++;
                }
                else if(s2[i] == 'B')
                {
                    count[1]++;
                    if(count[0] < count[1])
                    {
                        flag=0;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(flag)
            {
                if(s2[s2.length()-1] == 'A')
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
        }
    }
return 0;
}