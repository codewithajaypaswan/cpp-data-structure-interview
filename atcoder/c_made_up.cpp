#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007

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
    ll n;
    cin>>n;
    ll ans = 0;
    ll A[n],B[n],C[n];
    for(ll i=0; i<n; i++) cin>>A[i];
    for(ll i=0; i<n; i++) cin>>B[i];
    for(ll i=0; i<n; i++) cin>>C[i];
    unordered_map<ll,ll>mpC,mpB;
    for(ll i=0; i<n; i++) {
        mpC[C[i]]++;
    }
    for(ll i=0; i<n; i++) {
        mpB[B[i]] += mpC[i+1];
    }
    for(ll i=0; i<n; i++) {
        ans += mpB[A[i]];
    }
    cout<<ans<<endl;
}