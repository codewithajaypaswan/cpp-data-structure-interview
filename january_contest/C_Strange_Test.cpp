#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007
#define pb push_back
#define pf push_front
#define N 1e6+5


void solve() {
    int a,b;
    cin>>a>>b;
    int ans = 1e9;
    for(int i=0; i<=b; i++) {
        if((i|b) == b) {
            ans = min(ans, abs(i-a) + (i!=b));
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
