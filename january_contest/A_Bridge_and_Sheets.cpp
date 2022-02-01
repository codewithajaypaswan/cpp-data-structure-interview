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
    ll n,l,k;
    cin>>n>>l>>k;
    vector<ll>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    ll ans = 0;
    ll beg = (ll) ceil((double) 1.00 * arr[0]/k);
    ll end = (ll)(l-arr[n-1]-k)/k;
    if((l-arr[n-1]-k)%k != 0) end++;
    // cout<<beg<<" "<<end<<endl;
    ans += beg;
    if(end > 0) ans += end;
    for(int i=1; i<n; i++) {
        if(arr[i-1] + k > arr[i]) continue;
        else {
            ans += (arr[i] - (arr[i-1] + k))/k;
            if((arr[i] - arr[i-1] + k)%k != 0) {
                ans++;
            }
        }
    }
    cout<<ans<<endl;


}