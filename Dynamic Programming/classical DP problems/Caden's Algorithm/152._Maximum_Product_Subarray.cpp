class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0], curMin = nums[0], ans = nums[0], n = nums.size();
        for(int i=1; i<n; i++) {
            if(nums[i] < 0) swap(curMax, curMin);
            curMax = max(curMax*nums[i], nums[i]);
            curMin = min(curMin*nums[i], nums[i]);
            ans = max(ans, curMax);
        }
        return ans;
    }
};