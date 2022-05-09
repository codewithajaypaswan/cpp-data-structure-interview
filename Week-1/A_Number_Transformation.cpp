#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int a, b;
    cin>>a>>b;
    if(b%a != 0) {
        cout<<0<<" "<<0<<endl;
        return;
    }
    int x = b/a;
    cout<<1<<" "<<x<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
