#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int ans=0;
    unsigned ll a, b, c, d, x, g, f;
    cin>>a>>b>>c>>d>>x>>g>>f;
    for(int i=0;i<=x;i++)
    {
        unsigned ll na=a+i*f; unsigned ll nb=b+(x-i)*g;
        if((na+d-1)/d*nb>=c)
        ans=1;
    }
    cout<<(ans?"YES":"NO")<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
