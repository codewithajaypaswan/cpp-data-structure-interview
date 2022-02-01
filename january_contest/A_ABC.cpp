#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n == 1) {
        cout<<"YES"<<endl;
    }
    else if(n == 2) {
        if(s[0] == s[1]) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
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
