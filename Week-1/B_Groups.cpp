#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int n;
    cin>>n;
    int a[n][5];
    for(int i=0; i<n; i++) {
        for(int j=0; j<5; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(i == j) continue;
            int cnt1 = 0, cnt2 = 0, cnt = 0;
            for(int k=0; k<n; k++) {
                if(a[k][i] == 1) cnt1++;
                if(a[k][j] == 1) cnt2++;
                if(a[k][j] == 0 && a[k][i] == 0) cnt++;
            }
            if(cnt == 0 && cnt1 >= n/2 && cnt2 >= n/2) {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
