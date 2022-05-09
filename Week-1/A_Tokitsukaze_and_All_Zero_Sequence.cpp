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
    int z = 0, e = 0;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] == 0) {
            z++;
        }
        if(mp[a[i]] >= 1) {
            e = 1;
        }
        mp[a[i]]++;
    }
    if(z != 0) {
        cout<<n-z<<endl;
    }
    else if(e == 1) {
        cout<<n<<endl;
    }
    else {
        cout<<n+1<<endl;
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
