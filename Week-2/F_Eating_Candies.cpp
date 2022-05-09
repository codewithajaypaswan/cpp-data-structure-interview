#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int prefix[n], suffix[n];
    prefix[0] = a[0];
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }
    suffix[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--) {
        suffix[i] = suffix[i+1] + a[i];
    }
    map<int,int>mp;
    for(int i=0; i<n; i++) {
        mp[prefix[i]] = i+1;
    }
    int ans = 0;
    for(int i=n-1; i>=0; i--) { 
        if(mp.find(suffix[i]) != mp.end()) {
            if(mp[suffix[i]] >= i+1) break;
            ans = max(ans, mp[suffix[i]] + (n - i));
        }
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
