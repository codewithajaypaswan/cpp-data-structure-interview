class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        // return solution1(A);
        return solution2(A);
    }
    int solution2(vector<int>&A) {
        unordered_map<int,int>mp;
        int ans = 0, n = A.size();
        vector<vector<int>>dp(n, vector<int>(n, 0));
        for(int i=0; i<n; i++) {
            mp[A[i]] = i;
            for(int j=i+1; j<n; j++) {
                dp[i][j] = 2;
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                int y = A[i] + A[j];
                if(mp.count(y)) {
                    int index = mp[y];
                    dp[j][index] = dp[i][j] + 1;
                    ans = max(ans, dp[j][index]);
                }
            }
        }
        return ans;
    }
    int solution1(vector<int>&A) {
        unordered_set<int>st(A.begin(), A.end());
        int ans = 0, n = A.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                int x = A[j], y = A[i] + A[j], len = 2;
                while(st.count(y)) {
                    int temp = y;
                    y = y + x;
                    x = temp;
                    len++;
                    ans = max(ans, len);
                }
            }
        }
        // Time Complexity of this is O(n * n * logk)
        return ans;
    }
};