#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    vector<ll>dp(n, 0);
    long long ans = 0;
    for(ll i=1; i<n; i++) {
        ll cnt = 0;
        for(ll j=i+2; j<n; j++) {
            if(a[i-1] < a[j-1]) dp[j]++;
            cnt += dp[j];
            if(a[i] > a[j]) ans += cnt;
        }
    }
    cout<<ans<<endl;
}

int main() {
    fastIO;
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
