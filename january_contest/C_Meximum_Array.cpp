#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n;
    cin>>n;
    vector<int>v(n), mex(n), cnt(n+1);
    for(int i=0; i<n; i++) cin>>v[i];
    int m = 0, p = 0;
    for(int i=n-1; i>=0; i--) {
        cnt[v[i]]++;
        while(cnt[m]) m++;
        mex[i] = m;
    }
    // cout<<1<<" "<<m<<endl;
    for(int i=0; i<=n; i++) cnt[i] = 0;
    vector<int>ans;
    m = 0;
    for(int i=0; i<n; i++) {
        cnt[v[i]]++;
        while(cnt[m]) m++;
        if(m >= mex[p]) {
            ans.push_back(m);
            m = 0;
            for(int j=p; j<=i; j++) {
                cnt[v[j]]--;
            }
            p = i+1;
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans) cout<<it<<" ";
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
