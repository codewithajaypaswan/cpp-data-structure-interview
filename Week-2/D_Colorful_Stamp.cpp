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
    s += 'W';
    int b = 0, r = 0;
    for(char c:s) {
        // int b = 0, r = 0;
        if(c == 'B') b++;
        else if(c == 'R') r++;
        else {
            if(b > 0 && r > 0) {
                b = 0, r = 0;
                continue;
            }
            else if(b == 0 && r == 0) continue;
            else {
                // cout<<c<<" "<<b<<" "<<r<<endl;
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
