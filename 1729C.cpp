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
        map<char,vi> lst;
        int n = s.length();
        for(int i=0;i<s.length();i++)
        {
            lst[s[i]].push_back(i);
        }
        int dir = 1;
        if(s[0] > s[n-1])
        {
            dir = -1;
        }
        vi m;
        int cost = -1;
        int cur = 1;
        for(char c = s[0];c != s[n-1] + dir;c += dir)
        {
            if(lst[c].empty())
            {
                cur++;
                continue;
            }
            cost += cur;
            cur = 1;
            for(int i=0;i<lst[c].size();i++)
            {
                m.push_back(lst[c][i]);
            }
        }
        cout<<cost<<" "<<m.size()<<"\n";
        for(int i=0;i<m.size();i++)
        {
            if(m[i] == n-1) continue;
            cout<<m[i]+1<<" ";
        }
        cout<<n<<"\n";
    }
    return 0;
}