#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


// master has failed more times than beigneer has ever tried
void solve() {
    string s;
    cin>>s;
    int cnt = 0, n = s.size(), cnt1 = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '?') {
            cnt++;
        }
        if(s[i] == '1') {
            cnt1++;
        }
    }
    if(cnt == n) {
        cout<<n<<endl;
        return;
    }
    if(n == 1 || cnt1 == n) {
        cout<<1<<endl;
        return;
    }
    for(int i=0; i<n; i++) {
        if(s[i] == '?' || s[i] == '1') continue;
        else if(s[i] == '0') {
            bool flag = 1;
            int j = i;
            i++;
            while(i < n) {
                if(s[i] == '0'){
                    flag = 0;
                    break;
                }
                i++;
            }
            if(flag == 0) {
                // cout<<"YES"<<" "<<j-1<<" "<<s[j-1]<<endl;
                ll kk = 1;
                if(j-1 >= 0 && s[j-1] == '1') {
                    // cout<<"NNNNN"<<endl;
                    cout<<2<<endl;
                }
                else if(j-1 >= 0 && s[j-1] == '?') {
                    while(j-1 >= 0 && s[j-1] == '?') {
                        j--;
                        kk++;
                    }
                    if(j-1 >= 0 && s[j-1] == '1') kk++;
                    cout<<kk<<endl;
                }
                else {
                    cout<<1<<endl;
                }
            }
            else {
                // cout<<"YES2"<<endl;
                ll kk = 1;
                while(j-1 >= 0 && s[j-1] == '?') {
                    kk++;
                    j--;
                }
                if(j-1 >= 0 && s[j-1] == '1') kk++;
                cout<<kk<<endl;
            }
            return;
        }
    }
    cnt = 0; int i = n-1;
    while(i >= 0) {
        cnt++;
        if(s[i] == '1') {
            cout<<cnt<<endl;
            return;
        }
        i--;
    }
    cout<<cnt<<endl;
    return;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
