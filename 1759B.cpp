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
        ll m,s;
        cin>>m>>s;
        vector<int> b(m);
        int cur = 0;
        int max = 0;
        for(int i = 0; i < m; i++){
            cin >> b[i];
            cur += b[i];
            if(b[i] > max)
            {
                max = b[i];
            }
        }
        int total = cur + s;
        int i = max;
        int flag;
        while(1)
        {
            int tmp = i*(i+1)/2;
            if(tmp > total)
            {
                flag = 0;
                break;
            }
            else if(tmp == total)
            {
                flag = 1;
                break;
            }
            else
            {
                i++;
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