#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    ll n;
    cin>>n;
    vector<unsigned long long>dp(n+1,0), arr(n);
    for(ll i=0; i<n; i++) cin>>arr[i];
    unordered_map<ll,ll>mp;
    unsigned long long ans = 0;
    for(ll i=0; i<n; i++) {
        dp[i+1] = dp[i] + mp[arr[i]];
        mp[arr[i]] += i+1;
        ans += dp[i+1];
    }
    // for(ll i=1; i<=n; i++) cout<<dp[i]<<" ";
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
