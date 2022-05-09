#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it:mp) {
        if(it.second >= 3) {
            cout<<it.first<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
