#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007

bool check(vector<int>a, int mid) {
    vector<int>b = a;
    for(int i=b.size()-1; i>=2; i--) {
        if(b[i] < mid) return false;
        int d = min(b[i]-mid, a[i])/3;
        b[i-1] += d;
        b[i-2] += 2*d;
    }
    return b[0] >= mid && b[1] >= mid;
}
void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int low = 1;
    int high = *max_element(a.begin(), a.end()), ans;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(check(a, mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid-1;
        }
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
