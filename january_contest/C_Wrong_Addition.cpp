#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    ll a, s;
    cin>>a>>s;
    string ans = "";
    while(s) {
        int n1 = a%10, n2 = s%10;
        if(n1 <= n2) ans += to_string(n2-n1);
        else {
            s = s/10;
            n2 += 10 * (s%10);
            // cout<<n1<<" "<<n2<<endl;
            if(n1 < n2 && n2 >= 10 && n2 <= 19) {
                ans += to_string(n2 - n1);
            }
            else {
                cout<<-1<<endl;
                return;
            }
        }
        a = a/10;
        s = s/10; 
    }
    if(a) {
        cout<<-1<<endl;
        return;
    }
    if(s) {
        ans += to_string(s);

    }
    reverse(ans.begin(), ans.end());
    ll k = stoll(ans);
    cout<<k<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
