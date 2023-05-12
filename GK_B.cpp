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
        ll n,x,y;
        cin>>n>>x>>y;
        ll sum = (n*(n+1))/2;
        ll k = sum/(x+y);
        if(k*(x+y) == sum)
        {
            cout<<"Case #"<<count<<": POSSIBLE"<<endl;
            ll largest = n;
            ll ans[n];
            int size=0;
            int req = k*x;
            while(req > largest)
            {
                req-=largest;
                ans[size] = largest;
                largest--;
                size++;
            }
            if(req != 0)
            {
                ans[size] = req;
                size++;
            }
            cout<<size<<endl;
            for(int i = 0; i < size; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"Case #"<<count<<": IMPOSSIBLE"<<endl;
        }
    }
    return 0;
}