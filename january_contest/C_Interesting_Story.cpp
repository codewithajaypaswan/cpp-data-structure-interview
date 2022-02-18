/* Goal to be an candidate master*/
#include<bits/stdc++.h>
#include<tuple>
using namespace std;
#define ll long long
#define dd double
#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define fi first
#define se second
#define vll vector<ll>
#define pll pair<ll,ll>
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define min3(a,b,c) min(a,min(b,c))
#define pi 3.14159265358979323846264338
#define e(v) v.empty()
#define bscount(x) __builtin_popcountll(x)
#define sz(x) (int)(x).size()
ll mod = 1000000007;
ll n, k, t, m, q, flag = 0;
ll power(ll a, ll b) {ll res = 1; a %= mod; assert(b >= 0); for (; b; b >>= 1) {if (b & 1)res = res * a % mod; a = a * a % mod;} return res;}
ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a); }
ll lcm(ll a, ll b) {return a * b / gcd(a, b);}
ll min(ll a, ll b) {if (a > b)return b; else return a;}
ll max(ll a, ll b) {if (a > b)return a; else return b;}


// ll  isPrime(ll n)
// {

//     // Corner cases

//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;

//     if (n % 2 == 0 || n % 3 == 0)
//         return false;

//     for (int i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;

//     return true;
// }
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
void rotate(vector<ll>& vec, int d)
{
    // Base case
    if (d == 0)
        return;

    // Push first d elements from the beginning
    // to the end and remove those elements
    // from the beginning
    for (int i = 0; i < d; i++)
    {
        // adding first element at
        // the end of vector
        vec.push_back(vec[0]);

        // removing first element
        vec.erase(vec.begin());
    }



}

void solve(){
    // Logic Starts Here
    
    int n; cin>>n;
    vector<string> a(n);
    for(auto &i: a) cin>>i;
 
    int ma = 0;
 
    for(char ch='a'; ch<='e';ch++){
        vector<int> temp(n,0);
        for(int i=0;i<n;i++){
            for(char j:a[i]) temp[i] += j==ch ?1:-1;
        }
        sort(all(temp));
        // print(temp);
        int cnt=0, wordCnt=0;
        for(int i:temp){
            cnt+=i;
            if(cnt > 0) wordCnt++;
            else break;
        }
        ma = max(ma, wordCnt);
    }
    cout<<ma<<endl;
 
}

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int T;
    T = 1;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}

