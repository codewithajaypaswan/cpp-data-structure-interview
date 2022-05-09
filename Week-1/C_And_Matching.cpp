#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried

void solve() {
    int n, k;
    cin>>n>>k;
    if(k == 0) {
        for(int i=0; i<n/2; i++) {
            cout<<i<<" "<<(i ^ (n-1))<<endl;
        }
    }
    else if(k > 0 && k < n-1) {
        cout<<0<<" "<<(k ^ (n-1))<<endl;
        cout<<k<<" "<<n-1<<endl;
        for(int i=1; i<n/2; i++) {
            if(i == k || i == (k ^ (n-1))) continue;
            cout<<i<<" "<<(i ^ (n-1))<<endl;
        }
    }
    else if(k == n-1) {
        if(n == 4) {
            cout<<-1<<endl;
            return;
        }
        cout<<n-1<<" "<<n-2<<endl;
        cout<<n-3<<" "<<1<<endl;
        cout<<0<<" "<<2<<endl;
        for(int i=3; i<n/2; i++) {
            cout<<i<<" "<<(i ^ (n-1))<<endl;
        }
    }
    else {
        cout<<-1<<endl;
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
