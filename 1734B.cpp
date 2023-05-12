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
        if(n == 1)
        {
            cout<<"1\n";
            continue;
        }
        cout<<"1\n1 1\n";
        for(int i=3;i<=n;i++)
        {
            cout<<"1 ";
            for(int j = 0;j<i-2;j++)
            {
                cout<<"0 ";
            }
            cout<<"1\n";
        }
    }
    return 0;
}