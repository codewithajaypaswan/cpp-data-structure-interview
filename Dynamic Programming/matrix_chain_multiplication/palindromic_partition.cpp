class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        return solve(s, dp, 0, n-1);
    }
    bool isPal(string &s, int i, int j) {
        while(i < j) {
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
    int solve(string &s, vector<vector<int>>&dp, int i, int j) {
        if(i >= j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(isPal(s, i, j)) return 0;
        int ans = INT_MAX;
        for(int k=i; k<j; k++) {
            int temp = solve(s, dp, i, k) + solve(s, dp, k+1, j) + 1;
            ans = min(ans, temp);
        }
        return dp[i][j] = ans;
    }
};