#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int n;
    cin>>n;
    ll a[n], b[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }
    for(int i=0; i<n; i++) {
        if(a[i] > b[i]) {
            swap(a[i], b[i]);
        }
    }
    ll ans = 0;
    for(int i=1; i<n; i++) {
        ans += abs(a[i] - a[i-1]);
    }
    for(int i=1; i<n; i++) {
        ans += abs(b[i] - b[i-1]);
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
