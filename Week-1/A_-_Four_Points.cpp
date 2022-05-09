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
    int a[6];
    unordered_map<int,int>mpx, mpy;
    for(int i=0; i<6; i++) {
        cin>>a[i];
        if(i%2 == 0) mpx[a[i]]++;
        else mpy[a[i]]++;
    }
    int x1, y1;
    for(auto it:mpx) {
        if(it.second == 1) {
            x1 = it.first;
        }
    }
    for(auto it:mpy) {
        if(it.second == 1) {
            y1 = it.first;
        }
    }
    cout<<x1<<" "<<y1<<endl;

}