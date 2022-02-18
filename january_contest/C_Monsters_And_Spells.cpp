#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int t;
ll n;
ll a[N],b[N];
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        ll ed=a[n];
        ll st=a[n]-b[n]+1;
        ll ans=0;
        for(int i=n-1;i>=0;i--){
            if(st>a[i]){
                ans+=(1+ed-st+1)*(ed-st+1) /2;
                st=a[i]-b[i]+1;
                ed=a[i];

            }
            else st=min(a[i]-b[i]+1,st);
        }
        cout<<ans<<endl;
    }
}