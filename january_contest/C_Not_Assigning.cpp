#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007
void dfs(vector<pair<int,int>>adj[], int x,int parent, int val, vector<int>&res) {
    for(auto child:adj[x]) {
        if(child.first == parent) continue;
        res[child.second] = 5-val;
        dfs(adj, child.first, x, 5-val, res);
    }
}

void solve() {
    int n;
    cin>>n;
    vector<int>in(n+1, 0);
    vector<pair<int,int>>adj[n+1];
    for(int i=1; i<n; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
        in[u]++;
        in[v]++;
    }
    int start = 1;
    for(int i=1; i<=n; i++) {
        if(in[i] >= 3) {
            cout<<-1<<endl;
            return;
        }
        if(in[i] == 1) {
            start = i;
        }
    }
    vector<int>res(n+1);
    dfs(adj, start, -1, 2, res);
    for(int i=1; i<=n-1; i++) {
        cout<<res[i]<<" ";
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
