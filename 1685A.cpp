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
        sort(all(a));
        if(n%2==0)
        {
            vi tmp;
            for(int i = n-1; i >= n/2; i--){
                tmp.push_back(a[i]);
                
            }
            
            reverse(all(tmp));
            vi fin;
            ll p1=0;
            ll p2=0;
            while(fin.size() != n)
            {
                if(p1 == p2)
                {
                    fin.push_back(a[p1]);
                    p1++;
                }
                else
                {
                    fin.push_back(tmp[p2]);
                    p2++;
                }
            }
            int flag=1;
            for(int i = 1; i < n; i++){
                if(fin[i] == fin[i-1])
                {
                    flag=0;
                    break;
                }
            }
            if(fin[0] == fin[n-1])
            {
                flag=0;
            }
            if(flag)
            {
                cout<<"YES"<<"\n";
                for(int i = 0; i < n; i++){
                    cout<<fin[i]<<" ";
                }
                cout<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}