class Solution{
public:
    unordered_map<string, int>mp;
    int mod = 1003;
    int countWays(int N, string S){
        int isTrue = 1;
        return solve(0, N-1, S, isTrue);
    }
    int solve(int i, int j, string &s, int isTrue) {
        // base condition
        if(i > j) return false;
        if(i == j) {
            if(isTrue == 1) {
                return s[i] == 'T';
            }
            else {
                return s[i] == 'F';
            }
        }
        string key = to_string(i) +"."+ to_string(j) +"."+ to_string(isTrue);
        if(mp.find(key) != mp.end()) return mp[key];
        int ans = 0;
        for(int k=i+1; k<j; k+=2) {
            int lt = solve(i, k-1, s, 1);
            int lf = solve(i, k-1, s, 0);
            int rt = solve(k+1, j, s, 1);
            int rf = solve(k+1, j, s, 0);
            
            if(s[k] == '&') {
                if(isTrue == 1) {
                    ans += (lt * rt)%mod;
                }
                else {
                    ans += (lf * rf)%mod + (lt*rf)%mod + (lf*rt)%mod;
                }
            }
            else if(s[k] == '|') {
                if(isTrue == 1) {
                    ans += (lt*rt)%mod + (lt*rf)%mod + (lf*rt)%mod;
                }
                else {
                    ans += (lf*rf)%mod;
                }
            }
            else if(s[k] == '^') {
                if(isTrue == 1) {
                    ans += (lt*rf)%mod + (rt*lf)%mod;
                }
                else {
                    ans += (lf*rf)%mod + (lt*rt)%mod;
                }
            }
        }
        return mp[key] = ans%mod;
    }
};