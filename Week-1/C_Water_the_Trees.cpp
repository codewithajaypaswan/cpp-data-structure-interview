#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
ll check(ll a[], ll mx, ll n) {
    ll odd = 0, even = 0;
    for(ll i=0; i<n; i++) {
        even += (mx - a[i] - ((mx-a[i])&1))/2;
        odd += (mx - a[i])&1;
    }
    return odd > even ? odd*2-1 : ((even*2+odd)/3)*2+(even*2+odd)%3;
}
void solve() {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    ll mx = *max_element(a, a+n);
    cout<<min(check(a, mx, n), check(a, mx+1, n))<<endl;
}

int main() {
    fastIO;
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
