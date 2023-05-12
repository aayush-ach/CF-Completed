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
        vi b;
        vi occ(10,0);
        for(int i = 0; i < n; i++){
            if(occ[a[i]%10] == 3)
            {
                continue;
            }
            occ[a[i]%10]++;
            b.push_back(a[i]%10);
        }
        vi one;
        vi two;
        int flag=0;
        for(int i = 0; i < b.size(); i++){
            for(int j = 0; j < two.size(); j++){
                if((b[i] + two[j])%10 == 3)
                {
                    flag=1;
                    break;
                }
            }
            for(int j = 0; j < one.size(); j++){
                two.push_back((b[i] + one[j])%10);
            }
            one.push_back(b[i]%10);
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