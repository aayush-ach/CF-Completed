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
        set<vector<char>> substr;
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            vector<char> tmp;
            tmp.push_back(s[i]);
            tmp.push_back(s[i+1]);
            if(substr.find(tmp) == substr.end())
            {
                if(i)
                {
                    vector<char> temp;
                    temp.push_back(s[i-1]);
                    temp.push_back(s[i]);
                    substr.insert(temp);
                }
            }
            else
            {
                flag=1;
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