#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    ll n, ans = 0;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++) cin>>s[i];
    map<string, ll>mp;
    vector<ll>f1(26, 0), f2(26, 0);
    for(string c:s) {
        ans += f1[c[0] - 'a'] + f2[c[1] - 'a'] - 2*mp[c];
        f1[c[0] - 'a']++; f2[c[1] - 'a']++;
        mp[c]++;
    }
    cout<<ans<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
