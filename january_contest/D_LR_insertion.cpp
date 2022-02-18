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
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque<int>d;
    d.push_back(n);
    for(int i=n-1; i>=0; i--) {
        if(s[i] == 'L') d.push_back(i);
        else d.push_front(i);
    }
    for(int i=0; i<d.size(); i++) {
        cout<<d[i]<<" ";
    }

}