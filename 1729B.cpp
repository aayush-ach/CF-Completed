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
        vi a(n+4,1);
        vector<char> out;
        for(int i=0;i<n;i++)
        {
            char tmp;
            cin>>tmp;
            a[i] = tmp-'0';
        }
        for(int i=0;i<n;i++)
        {
            int chr;
            if(!a[i+2])
            {
                if(a[i+3])
                {
                    chr = 10*a[i] + a[i+1];
                    i += 2;
                }
                else
                {
                    chr = a[i];
                }
            }
            else
            {
                chr = a[i];
            }
            out.push_back(chr-1+'a');
        }
        for(int i=0;i<out.size();i++)
        {
            cout<<out[i];
        }
        cout<<"\n";
    }
    return 0;
}