#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<ll> vi;
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
        char a[n][2];
        for(int i = 0; i < n; i++){
            cin>>a[i][0]>>a[i][1];
        }
        ll ans=0;
        // vi occur1[11];
        // for(int i = 0; i < n; i++){
        //     occur1[a[i][0]-'a'].push_back(i);
        //     for(int j = 0; j < occur1[a[i][0]-'a'].size()-1; j++){
        //         if(a[i][1] != a[occur1[a[i][0]-'a'][j]][1])
        //         {
        //             // ans += occur1[a[i][0]-'a'].size()-1;
        //             ans++;
        //         }
        //     }
        // }
        // vi occur2[11];
        // for(int i = 0; i < n; i++){
        //     occur2[a[i][1]-'a'].push_back(i);
        //     for(int j = 0; j < occur2[a[i][1]-'a'].size()-1; j++){
        //         if(a[i][0] != a[occur2[a[i][1]-'a'][j]][0])
        //         {
        //             // ans += occur2[a[i][1]-'a'].size()-1;
        //             ans++;
        //         }
        //     }
        // }

        ll first_char[11];
        ll second_char[11];
        ll same[11][11];
        for(int i = 0; i < 11; i++){
            first_char[i]=0;
            second_char[i]=0;
        }
        for(int i = 0; i < 11; i++){
            for(int j = 0; j < 11; j++){
                same[i][j]=0;
            }
        }
        for(int i = 0; i < n; i++){
            first_char[a[i][0]-'a']++;
            second_char[a[i][1]-'a']++;
            same[a[i][0]-'a'][a[i][1]-'a']++;
            ans+=first_char[a[i][0]-'a'] + second_char[a[i][1]-'a'] -2*same[a[i][0]-'a'][a[i][1]-'a'];
        }

        cout<<ans<<endl;
    }
    return 0;
}