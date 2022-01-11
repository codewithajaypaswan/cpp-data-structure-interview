class Solution {
public:
    int subarrayBitwiseORs(vector<int> A) {
        unordered_set<int> res, cur, cur2;
        for (int i: A) {
            cur2 = {i};
            for (int j: cur) cur2.insert(i|j);
            cur = cur2;
            for (int j: cur) res.insert(j);
        }
        return res.size();
    }
};

class Solution {
public:
    // classical 2 pointer approach
    // importanant is the time complexity to anaylze that is O(nlog(n))
    // Approach :-
    // we take the left and right pointer 
    // left pointer points to the starting value of the unprocessed
    // right pointer points to last pointer of the starting pointer
    // after every itterationg we just exactly right step towrad left
    int subarrayBitwiseORs(vector<int> A) {
        vector<int>res;
        int left = 0, right;
        for(int a:A) {
            right = res.size();
            res.push_back(a);
            for(int i=left; i<right; i++) {
                if(res.back() != (res[i]|a)) {
                    res.push_back(res[i]|a);
                }
            }
            left = right;
        }
        return unordered_set<int>(res.begin(), res.end()).size();
    }
};