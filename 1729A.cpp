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
        int a,b,c;
        cin>>a>>b>>c;
        if(a > abs(b-c) + c)
        {
            cout<<"2\n";
        }
        else if(a < abs(b-c) +c)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"3\n";
        }
    }
    return 0;
}