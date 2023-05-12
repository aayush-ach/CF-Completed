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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int left=-1;
        int right=-1;
        for(int i = 0; i < n-1; i++){
            if(a[i] == a[i+1])
            {
                if(left == -1)
                {
                    left = i+1;
                }
                else
                {
                    right = i;
                }
            }
        }
        ll ans;
        if(right == -1)
        {
            ans=0;
        }
        else if(right == left)
        {
            ans = 1;
        }
        else
        {
            ans = right-left;
        }
        cout<<ans<<endl;
    }
    return 0;
}