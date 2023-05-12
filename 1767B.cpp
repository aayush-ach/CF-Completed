#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> higher;
        for(int i = 1; i < n; i++){
            if(a[i] > a[0])
            {
                higher.push_back(a[i]);
            }
        }
        int p=0;
        sort(all(higher));
        while(p < higher.size())
        {
            if(higher[p] <= a[0])
            {
                p++;
                continue;
            }
            int tmp =( higher[p]-a[0])/2 + ( higher[p]-a[0])%2;
            higher[p]-= tmp;
            a[0]+= tmp;
            
        }
        cout<<a[0]<<"\n";
    }
    return 0;
}