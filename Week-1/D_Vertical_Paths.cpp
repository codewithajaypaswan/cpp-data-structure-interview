#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void dfs(int x, vector<int>&temp, vector<int>adj[], vector<int>&vis) {
    if(vis[x]) return;
    vis[x] = 1;
    temp.push_back(x);
    for(int u:adj[x]) {
        // cout<<u<<" : ";
        dfs(u, temp, adj, vis);
    }
}
void solve() {
    int n;
    cin>>n;
    vector<int>adj[n+1];
    int root = -1;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if(x == i) root = x;
        else adj[x].push_back(i);
    }
    queue<int>level, q;
    q.push(root);
    while(!q.empty()) {
        int x = q.front(); q.pop();
        level.push(x);
        // cout<<x<<endl;
        for(int u:adj[x]) {
            // cout<<u<<" ";
            q.push(u);
        }
    }
    vector<int>vis(n+1, 0);
    // for(int i=1; i<=n; i++) {
    //     cout<<i<<"-> "<<endl;
    //     for(int x:adj[i]) {
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<int>>ans;
    while(!level.empty()) {
        int x = level.front(); level.pop();
        if(vis[x]) continue;
        vector<int>temp;
        dfs(x, temp, adj, vis);
        ans.push_back(temp);
    }
    cout<<ans.size()<<endl;
    for(auto x:ans) {
        cout<<x.size()<<endl;
        for(int i:x) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
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
