#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n;
    cin>>n;
    vector<int>visited(n+1, 0);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        while(x > n) x = x>>1;
        while(x > 0 && visited[x]) x = x>>1;
        visited[x] = 1;
    }
    if(visited[0]) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
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
