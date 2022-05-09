#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=0; i<n-1; i+=2) {
        if(s[i] == s[i+1]) continue;
        {
            cnt++;
            s[i] = 'x', s[i+1] = 'x';
        }
    }
    string ans="";
    int sub = 0;
    for(char c:s) {
        if(c != 'x') ans += c;
    }
    for(int i=0; i<ans.size(); i++) {
        if(ans[i] != ans[i+1]) {
            sub++;
        }
    }
    if(sub == 0) sub = 1;
    cout<<cnt<<" "<<sub<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
