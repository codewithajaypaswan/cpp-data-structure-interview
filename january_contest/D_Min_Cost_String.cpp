#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n,k;
    cin>>n>>k;
    vector<char>ch(2e5+5);
    int ind = 0;
    for(int i=0; i<k && ind < n; i++) {
        ch[ind++] = i + 'a';
        for(int j=i+1; j<k; j++) {
            ch[ind++] = i + 'a';
            ch[ind++] = j + 'a'; 
        }
    }
    for(int i=0; i<)
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
