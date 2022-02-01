#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n;
    cin>>n;
    int p = 1;
    while((1<<p) <= n) {
        p++;
    }
    p--;
    // cout<<p<<endl;
    cout<<(1<<p) - 1<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
