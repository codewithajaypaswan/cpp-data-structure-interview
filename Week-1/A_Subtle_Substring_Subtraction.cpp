#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    string s;
    cin>>s;
    if(s.size() == 1) {
        cout<<"Bob"<<" "<<(s[0] - 'a')+1<<endl;
    }

    else {
        int res = 0;
        for(char c:s) {
            res += (c - 'a')+1;
        }
        if(s.size()%2 == 0) {
            cout<<"Alice"<<" "<<res<<endl;
            return;
        }
        if((s[0] - 'a') > (s[s.size()-1] - 'a')) {
            res = res - 2*(s[s.size()-1] - 'a' + 1);
        }
        else {
            res = res - 2*(s[0] - 'a' + 1);
        }
        cout<<"Alice"<<" "<<res<<endl;
    }
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
