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
    for(int i=0; i<n; i++) cin>>a[i];
    int ops = 0;
    if(n == 1) {
        cout<<0<<endl;
        return;
    }
    if(a[n-1] < n-1) {
        cout<<-1<<endl;
        return;
    }
    for(int i=n-2; i>=0; i--) {
        if(a[i] < a[i+1]) continue;
        else {
            if(a[i] < i) {
                cout<<-1<<endl;
                return;
            }
            while(a[i] >= a[i+1]) {
                a[i] = a[i]/2;
                // cout<<a[i]<<" ";
                ops++;
                if(a[i] == 0) {
                    if(a[i] >= a[i+1]) {
                        cout<<-1<<endl;
                        return;
                    }
                }
            }
            int len = i+1;
            if(a[i] >= a[i+1] || (a[i] == 0 && i != 0) || (a[i] < i)) {
                // cout<<a[i]<<" "<<a[i+1]<<endl;
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<ops<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
