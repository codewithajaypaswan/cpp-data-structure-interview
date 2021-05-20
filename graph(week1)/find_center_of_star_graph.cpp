#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007

int findCenter(vector<vector<int>>&adj) {
    return (adj[0][0] == adj[1][0] || adj[0][0] == adj[1][1]) ? adj[0][0] : adj[0][1];
}
int main() {
    int n;
    cin>>n;
    int e;
    vector<vector<int>>adj(n, vector<int>(n));
    for(int i=0; i<e; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<findCenter(adj)<<endl;

}