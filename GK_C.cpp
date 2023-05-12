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
    int count=0;
    while(count<t){
        count++;
        ll n,l;
        cin>>n>>l;
        vector<int> P(n);
        vector<int> D(n);
        for(int i = 0; i < n; i++){
            cin >> P[i];
            cin >> D[i];
        }
        for(int i = 0; i < n; i++){
            if(D[i] == 0)
            {
                D[i] = -1;
            }
        }
        vi falling;
        while(falling.size()<n)
        {
            for(int i = 0; i < n-1; i++){
                if(P[i] = P[i+1]-1 && D[i] == 1 && D[i+1] == -1)
                {
                    D[i] = -1;
                    D[i+1] = 1;
                    i++;
                }
                else if(P[i] == P[i+1])
                {
                    D[i] = -1;
                    D[i+1] = 1;
                    i++;
                }
            }
            for(int i = 0; i < n; i++){
                P[i] += D[i];
            }
            for(int i = 0; i < n; i++){
                if(P[i] == 0 || P[i] == l)
                {
                    falling.push_back(i+1);
                    n--;
                }
            }
        }
        cout<<"Case #"<<count<<": ";
        for(int i = 0; i < n; i++){
            cout<<falling[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}