#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    int n;
    cin>>n;
    int a[n], cnt = 0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] < 0) {
            cnt++;
        }
    }
    for(int i=0; i<n; i++) {
        if(a[i] < 0 && cnt == 0) {
            a[i] = a[i] * -1;
            // cout<<a[i]<<endl;
        } 
        else if(cnt > 0 && a[i] > 0) {
            a[i] = a[i] * -1;
            cnt--;
        }
        else if(a[i] < 0) {
            cnt--;
        }
    }

    for(int i=0; i<n; i++) {
        // cout<<a[i]<<" ";
        if(a[i] > a[i+1]) {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(a[i] < 0) {
                cnt++;
            }
        }
        bool ans = true;
        for(int i=0; i<cnt; i++) {
            a[i] = abs(a[i]) * -1;
        }
        for(int i=cnt; i<n; i++) {
            a[i] = abs(a[i]);
        }
        for(int i=0; i<n-1; i++) {
            if(a[i] > a[i+1]) {
                ans = false;
                break;
            }
        }
        if(ans) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}