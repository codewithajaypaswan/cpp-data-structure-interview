#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define mod 1000000007


void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int>num, dem;
    int i = n-1, cnt = 0;
    while(i >=0 && cnt < k) {
        dem.push_back(arr[i--]);
        cnt++;
    }
    cnt = 0;
    while(i >=0 && cnt < k) {
        num.push_back(arr[i--]);
        cnt++;
    }
    // cout<<i<<endl;
    ll sum = 0;
    int j = 0, m = 0;
    while(j < num.size() && m < dem.size()) {
        sum += num[j++]/dem[m++];
    }
    while(i >= 0) {
        sum += arr[i--];
    }
    cout<<sum<<endl;
}

int main() {
    fastIO;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}

// if the range of numbers is in between 1 to n
// in constant space(o(1))
// approach is the element that appears twice will be a negative number
int duplicate(vector<int>&nums) {
    int n = nums.size();
    for(int i=0; i<n; i++) {
        if(nums[abs(nums[i]) - 1] < 0) return abs(nums[i]);
        nums[abs(nums[i]) - 1] = -1 * nums[abs(nums[i]) - 1];
    }
}