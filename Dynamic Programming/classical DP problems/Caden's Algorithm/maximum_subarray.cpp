class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentMax = -1e9, maxSofar = -1e9;
        for(int x:nums) {
            maxSofar = max(maxSofar+x, x);
            currentMax = max(currentMax, maxSofar);
        }
        return currentMax;
    }
};