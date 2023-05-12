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
        vector<int> cnt(n+1,0);
        stack<int> max;
        max.push(0);
        for(int i = 0; i < n; i++){
            cin >> cnt[i+1];
            if(cnt[i+1] > cnt[max.top()])
            {
                max.push(i+1);
            }
            else if(cnt[i+1] == cnt[max.top()])
            {
                max.pop();
            }
        }
        cout<<max.top()<<"\n";
        
    }
    return 0;
}