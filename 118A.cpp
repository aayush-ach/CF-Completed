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
    string s;
    cin>>s;
    ll n = s.length();
    vector<char> output;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y')
        {
            continue;
        }
        else
        {
            output.push_back('.');
            if(s[i] < 'a')
            {
                s[i] += 32;
            }
            output.push_back(s[i]);
        }
    }
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i];
    }
    return 0;
}

