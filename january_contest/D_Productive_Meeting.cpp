#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n;
    cin>>n;
    priority_queue<pair<int,int>>pq;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if(x > 0)
        pq.push({x, i});
    }
    vector<vector<int>>ans;
    while(pq.size() >= 2) {
        auto x = pq.top(); pq.pop();
        auto y = pq.top(); pq.pop();
        // cout<<x.first<<" "<<y.first<<endl;
        ans.push_back({x.second, y.second});
        x.first--; y.first--;
        if(x.first > 0) pq.push(x);
        if(y.first > 0) pq.push(y);
    }
    cout<<ans.size()<<endl;
    for(auto it:ans) {
        cout<<it[0]<<" "<<it[1]<<endl;
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
