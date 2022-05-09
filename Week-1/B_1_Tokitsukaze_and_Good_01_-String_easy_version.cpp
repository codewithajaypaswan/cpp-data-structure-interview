#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=0; i<n-1; i+=2) {
        if(s[i] == s[i+1]) continue;
        else cnt++;
    }
    cout<<cnt<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
