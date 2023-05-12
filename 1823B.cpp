#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll k,n;
        cin>>n>>k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int bad = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] - 1)%k != i%k) {
                bad++;
            }
        }
        if(!bad) {
            cout<<"0\n";
        }
        else if(bad == 2) {
            cout<<"1\n";
        }
        else {
            cout<<"-1\n";
        }

    }
    return 0;
}