#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    string s;
    cin>>s;
    int f[3] = {0};
    for(int i=0; i<s.size(); i++) {
        f[s[i] - 'A']++;
    }
    if(f[1] == f[0] + f[2]) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
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
