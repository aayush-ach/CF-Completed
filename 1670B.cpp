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
        ll k;
        cin>>k;
        char special[k];
        for(int i = 0; i < k; i++){
            cin>>special[i];
        }
        ll max=0;
        ll cur=0;
        for(int i = 0; i < n; i++){
            
            for(int j = 0; j < k; j++){
                if(s[i] == special[j])
                {
                    if(cur > max)
                    {
                        max = cur;
                    }
                    cur=0;
                }
            }
            cur++;
        }
        cout<<max<<endl;
    }
    return 0;
}