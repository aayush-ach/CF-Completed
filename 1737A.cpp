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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vi num(26,0);
        for(int i=0;i<n;i++)
        {
            num[s[i] - 'a']++;
        }
        string out="";
        for(int i=0;i<min(25,n/k);i++)
        {
            while(k-out.size() > num[i])
            {
                out.push_back('a' + i);
            }
        }
        char ch = 'a' + min(25,n/k);
        while(k > out.size())
        {
            out += ch;
        }
        reverse(out.begin(),out.end());
        cout<<out<<"\n";
    }
    
    return 0;
}