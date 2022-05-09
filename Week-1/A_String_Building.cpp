#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    string s;
    cin>>s;
    int cnt = 1;
    for(int i=1; i<s.size(); i++) {
        if(s[i] == s[i-1]) {
            cnt++;
        }
        else {
            if(cnt >= 2) {
                cnt = 1;
            }
            else {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    if(cnt >= 2) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
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
