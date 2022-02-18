#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007

ll recur(vector<ll>&v, vector<vector<ll>>&dp, ll i, ll j) {
    if(i >= j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = v[j] - v[i] + min(recur(v, dp, i+1, j), recur(v, dp, i, j-1));
}
void solve() {
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<vector<ll>>dp(n+1, vector<ll>(n+1, -1));
    sort(v.begin(), v.end());
    cout<<recur(v, dp, 0, n-1)<<endl;
}

int main() {
    fastIO;
    ll t;
    // cin>>t;
    // while(t--) {
        solve();
    // }
}
