class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        // return solution1(arr);
        // return solution2(arr);
        return solution3(arr);
    }
    
    int solution3(vector<int>&arr) {
        // dp solution 
        int n = arr.size(), ans = 1;
        vector<vector<int>>dp(n, vector<int>(2, 1));
        for(int i=1; i<n; i++) {
            if(arr[i] > arr[i-1]) 
                dp[i][1] = dp[i-1][0] + 1;
            else if(arr[i] < arr[i-1])
                dp[i][0] = dp[i-1][1] + 1;
            ans = max({ans, dp[i][1], dp[i][0]});
        }
        return ans;
    }
    
    int solution2(vector<int>&arr) {
        int n = arr.size();
        // combining both for loop into single loop from solution1
        int left1 = 1, right1 = 1, res = 1;
        for(int i=0; i<n-1; i++) {
            if(i%2 == 0) {
                left1 = arr[i] > arr[i+1] ? left1+1 : 1;
                right1 = arr[i] < arr[i+1] ? right1+1 : 1;
            }
            else {
                left1 = arr[i] < arr[i+1] ? left1+1 : 1;
                right1 = arr[i] > arr[i+1] ? right1+1 : 1;
            }
            res = max({res, left1, right1});
        }
        return res;
    }
    int solution1(vector<int>arr) {
        int n = arr.size();
        if(n == 0) return 0;
        int maxLen = 1, len = 1;
        for(int i=0; i<n-1; i++) {
            if(i%2 == 0) {
                // at even places we first assume that there is increasing slope
                if(arr[i] > arr[i+1]) len++;
                else len = 1;
            }
            else {
                if(arr[i] < arr[i+1]) len++;
                else len = 1;
            }
            maxLen = max(maxLen, len);
        }
        
        len = 1;
        for(int i=0; i<n-1; i++) {
            // at odd places we then assuem that there is decreasing slope
            if(i%2 == 0) {
                if(arr[i] < arr[i+1]) len++;
                else len = 1;
            }
            else {
                if(arr[i] > arr[i+1]) len++;
                else len = 1;
            }
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
};