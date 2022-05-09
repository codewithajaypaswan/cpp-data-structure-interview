#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
char ch[55][55];
void solve() {
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) cin>>ch[i][j];
    }
    for(int i=1; i<=m; i++) {
        int pos = n;
        for(int j=n; j>=1; j--) {
            if(ch[i][j] == '*') {
                ch[i][j] = '.';
            }
        }
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
