class Solution {
public:
    int superEggDrop(int egg, int floor) {
        vector<vector<int>>dp(egg+1, vector<int>(floor+1, -1));
        return solve(egg, floor, dp);
    }
    int solve(int egg, int floor, vector<vector<int>>&dp) {
        if(floor == 0 || floor == 1) return floor;
        if(egg == 1) return floor;
        if(dp[egg][floor] != -1) return dp[egg][floor];
        // drop egg from each floor and take the minimum in wrost case
        int ans = INT_MAX;
        for(int k=1; k<=floor; k++) {
            int temp = max(solve(egg-1, k-1, dp), solve(egg, floor-k, dp)) + 1;
            ans = min(ans, temp);
        }
        return dp[egg][floor] = ans;
    }
};