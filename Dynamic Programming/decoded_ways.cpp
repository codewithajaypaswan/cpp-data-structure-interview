// using dynamic programming

// link: https://leetcode.com/problems/decode-ways/
// first decoding 1 string at a time then decoding 2 string at time

// itterative approach
class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n == 0 || s[0] == 0) return 0;
        vector<int>dp(n+1,0);
        dp[n] = 1;
        for(int i=n-1; i>=0; i--) {
            if(s[i] == '0') dp[i] = 0;
            else {
                // encoding 1 string at a time
                dp[i] = dp[i+1];
                
                // encoding 2 string at a time
                if(i+1<n && (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6'))) dp[i] += dp[i+2];
            }
        }
        return dp[0];
    }
};


//  recursive approach
class Solution {
public:
    int numDecodings(string s) {
       if(s.empty() || s[0] == '0') return 0;
        vector<int>dp(s.size()+1,-1);
        dp[s.size()] = 1;
        return solve(s,0,dp);
    }
    int solve(string s, int i, vector<int>&dp) {
        if(s.size() == i) return 1;
        if(dp[i] != -1) return dp[i];
        if(s[i] == '0') return 0;
        int res = solve(s,i+1,dp);
        if(i<s.size()-1 && (s[i] == '1' || s[i] == '2' && s[i+1] <='6')) res += solve(s,i+2,dp);
        return dp[i] = res;
    }
};