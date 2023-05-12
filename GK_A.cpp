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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int spec = 0;
        int lf=0;
        int lu=0;
        int length=0;
        int dig=0;
        for(int i = 0; i < n; i++){
            if(s[i] >= 'a' && s[i]<='z')
            {
                lf=1;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                lu=1;
            }
            else if(s[i] == '#' || s[i] == '@' || s[i] == '*' || s[i] == '&')
            {
                spec=1;

            }
            else if(s[i]>='0' && s[i]<='9')
            {
                dig=1;
            }
            length++;
        }
        if(lu==0)
        {
            s.push_back('A');
            length++;
        }
        if(lf==0)
        {
            s.push_back('a');
            length++;
        }
        if(spec==0)
        {
            s.push_back('#');
            length++;
        }
        if(dig==0)
        {
            s.push_back('0');
            length++;
        }
        if(length<7)
        {
            for(int i = 0; i < 7-length; i++){
                s.push_back('a');
            }
        }
        cout<<"Case #"<<count<<": "<<s<<endl;
    }
    return 0;
}