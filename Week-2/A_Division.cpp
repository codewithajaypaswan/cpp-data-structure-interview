#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    ll n, ans;
    cin>>n;
    if(n >= 1900) {
        ans = 1;
    }
    else if(n >= 1600 && n <= 1899) {
        ans = 2;
    }
    else if(n >= 1400 && n <= 1599) {
        ans = 3;
    }
    else {
        ans = 4;
    }
    cout<<"Division "<<ans<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
