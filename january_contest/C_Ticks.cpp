#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<string>s(n), vis(n);
    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<n; i++) vis[i] = s[i];
    for(int i=n-1; i>=0; i--) {
        for(int j=0; j<m; j++) {
            if(s[i][j] == '*') {
                // cout<<i<<" "<<j<<endl;
                int x1 = i-1, y1 = j+1, x2 = i-1, y2 = j-1, cnt = 0;
                // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<"before"<<endl;
                while(x1>=0 && y1<m && x2>=0 && y2>=0 && s[x1][y1] == '*' && s[x2][y2] == '*') {
                    // cout<<"fll"<<endl;
                    // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                    // vis[x1][y1] = '.';
                    // vis[x2][y2] = '.';
                    x1--; y1++;
                    x2--; y2--;
                    cnt++;
                }
                if(cnt >= k){
                    vis[i][j] = '.';
                    int x1 = i-1, y1 = j+1, x2 = i-1, y2 = j-1, cnt = 0;
                // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<"before"<<endl;
                    while(x1>=0 && y1<m && x2>=0 && y2>=0 && s[x1][y1] == '*' && s[x2][y2] == '*') {
                        // cout<<"fll"<<endl;
                        // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                        vis[x1][y1] = '.';
                        vis[x2][y2] = '.';
                        x1--; y1++;
                        x2--; y2--;
                        cnt++;
                    }
                } 

            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            // cout<<vis[i][j];
            if(vis[i][j] == '*') {
                cout<<"NO"<<endl;
                return;
            }
        }
        // cout<<endl;
    }
    cout<<"YES"<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
