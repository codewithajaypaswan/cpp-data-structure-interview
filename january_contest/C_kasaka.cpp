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
    string s;
    cin>>s;
    int n = s.size();
    int i = 0, j = n-1;
    while(i<n && s[i] == 'a' && s[j] == 'a') {
        i++; j--;
    }

    while(j >= 0 && s[j] == 'a') j--;
    bool flag = true;
    while(i < j) {
        if(s[i] != s[j]) {
            flag = false;
            break;
        }
        i++; j--;
    }
    if(flag) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }

}