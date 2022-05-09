#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int k;
    cin>>k;

    unordered_set<char>st;
    for(int i=0; i<k; i++) {
        char x;
        cin>>x;
        st.insert(x);
    }
    bool all = true;
    for(int i=0; i<n; i++) {
        if(!st.count(s[i])) {
            all = false;
        }
    }
    if(all) {
        cout<<0<<endl;
        return;
    }
    vector<int>v;
    for(int i=n-1; i>=0; i--) {
        if(st.find(s[i]) != st.end()) {
            i--;
            int ops = 0;
            while(i >= 0 && st.count(s[i])) i--;
            while(i >= 0 && !st.count(s[i])) {
                i--;
                ops++;
            }
            i++;
            if(ops == 0) ops++;
            v.push_back(ops);
        }
    }
    if(v.empty()) {
        cout<<0<<endl;
        return;
    }
    // for(int i=0; i<v.size(); i++) {
    //     cout<<v[i]<<endl;
    // }
    if(v.size() == 1) {
        cout<<v[0]<<endl;
        return;
    }
    int ans = 0;
    for(int i=0; i<v.size()-1; i++) {
        ans = max(v[i], v[i+1]) + 1;
    }
    cout<<ans<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
