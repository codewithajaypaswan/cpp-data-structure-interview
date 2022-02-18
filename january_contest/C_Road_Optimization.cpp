#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
using namespace std;
 
int main() {
    cin.tie(0) -> sync_with_stdio(0);
 
    int N, L, K;
    cin >> N >> L >> K;
 
    vector<int> idx(N + 1, L), sign(N + 1, 0);
    for (int i = 0; i < N; i++) cin >> idx[i];
    for (int i = 0; i < N; i++) cin >> sign[i];
 
    auto dp = vector(N + 1, vector(K + 1, INT_MAX / 2));
    dp[N][0] = 0;
    for (int n = N - 1; n >= 0; n--) {
        for (int k = 0; k <= K; k++) {
            for (int i = n + 1, j = k; i <= N and j >= 0; i++, j--) {
                dp[n][k] = min(dp[n][k], sign[n] * (idx[i] - idx[n]) + dp[i][j]);
            }
        }
    }
    cout << *min_element(all(dp[0])) << '\n';
 
   