#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 32768 

ll power(ll x, ll n) {
    ll ans = 1;
    while(n>0) {
        if(n&1){
            ans = (ans*x)%mod;
            n = n-1;
        }
        else {
            x = (x*x)%mod;
            n = n/2;
        }
    }
    return ans;
}

int main() 
{
    fastIO;
    int n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(ll k=0; k<n; k++) {
        ll x = a[k],ans = 15;
        for(ll i=0; i<=15; i++) {
            for(ll j=0; j<=15; j++) {
                ll temp = (x + i) * pow(2, j);
                if(temp%mod == 0) {
                    ans = min(ans, i+j);
                }
            }
        }
        cout<<ans<<" ";
    }

}