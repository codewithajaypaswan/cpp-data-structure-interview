#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a+b+c < x+y) {
        cout<<"NO"<<endl;
        return;
    }
    else if(a >= x && b >= y) {
        cout<<"YES"<<endl;
        return;
    }
    ll reqA = x-a <= 0 ? 0 : abs(x-a);
    ll reqB = y-b <= 0 ? 0 : abs(y-b);
    if(reqA + reqB <= c) {
        cout<<"YES"<<endl;
        return;
    }
    else {
        cout<<"NO"<<endl;
        return;
    }
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
