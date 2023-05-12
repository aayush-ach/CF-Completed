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
        vi perm(n);
        iota(all(perm),1);
        if(n%2)
        {
            for(int i=1;i<n;i+=2)
            {
                int temp = perm[i];
                perm[i] = perm[i+1];
                perm[i+1] = temp;
            }
        }
        else
        {
            for(int i=0;i<n;i+=2)
            {
                int temp = perm[i];
                perm[i] = perm[i+1];
                perm[i+1] = temp;
            }
        }
        perm[n-2] = n-1;
        perm[n-1] = n;
        for(int i=0;i<n;i++)
        {
            cout<<perm[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}