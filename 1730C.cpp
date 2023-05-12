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
        string str;
        cin>>str;
        int len = str.length();
        vector<int> count(10,0);
        vector<int> behind(10,0);
        for(int i=0;i<len;i++)
        {
            int c = str[i] - '0';
            count[c]++;
            behind[c]++;
            for(int j = c+1;j<9;j++)
            {
                count[j] -= behind[j];
                count[min(j+1,9)] += behind[j];
                behind[j] = 0;
            }
        }
        for(int i=0;i<10;i++)
        {
            while(count[i])
            {
                cout<<i;
                count[i]--;
            }
        }
        cout<<"\n";
    }
    return 0;
}