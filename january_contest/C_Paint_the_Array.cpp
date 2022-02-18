#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    ll g1 = 0, g2 = 0;
    for(ll i=0; i<n; i+=2) {
        g1 = __gcd(a[i], g1);
    }
    for(ll i=1; i<n; i+=2) {
        g2 = __gcd(a[i], g2);
    }
    bool flag = false;
    for(ll i=0; i<n; i+=2) {
        if(a[i]%g2 == 0) {
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout<<g2<<endl;
        return;
    }
    flag = false;
    for(ll i=1; i<n; i+=2) {
        if(a[i]%g1 == 0) {
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout<<g1<<endl;
        return;
    }
    else {
        cout<<0<<endl;
        return;
    }
}

int main() {
    fastIO;
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
