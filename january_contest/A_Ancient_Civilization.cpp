#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n,l;
    cin>>n>>l;
    int a[n];
    int ans = 0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<l; i++) {
        int cnt = 0;
        for(int j=0; j<n; j++) {
            if((1<<i) & a[j]) {
                cnt++;
            }
        }
        if(cnt*2 > n) {
            ans |= (1<<i);
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
