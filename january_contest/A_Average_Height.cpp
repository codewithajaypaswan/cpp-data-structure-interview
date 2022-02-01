#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n;
    cin>>n;
    vector<int>odd, even;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x%2 == 0) even.push_back(x);
        else odd.push_back(x);
    }
    for(int x:even) cout<<x<<" ";
    for(int y:odd) cout<<y<<" ";
    cout<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
