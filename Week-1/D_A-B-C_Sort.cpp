#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define mod 1000000007

// master has failed more times than beigneer has ever tried

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0 + n % 2; i < n; i += 2)
    {
        if (a[i] > a[i + 1])
            swap(a[i], a[i + 1]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    fastIO;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}