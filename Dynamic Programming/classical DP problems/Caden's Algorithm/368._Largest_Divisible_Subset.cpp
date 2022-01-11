class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), start, maxLen = 0;
        vector<int>parent(n), dp(n);
        for(int i=n-1; i>=0; i--) {
            for(int j=i; j<n; j++) {
                if(nums[j]%nums[i] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                    if(maxLen < dp[i]) {
                        start = i;
                        maxLen = dp[i];
                    }
                }
            }
        }
        vector<int>ans;
        while(maxLen--) {
            ans.push_back(nums[start]);
            start = parent[start];
        }
        return ans;
    }
};