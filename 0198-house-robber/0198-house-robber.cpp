class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        vector<int> dp(n, -1);
        return func(n - 1, nums, dp);
    }
    int func(int ind, vector<int>& arr, vector<int>& dp) {
        if (ind == 0)
            return arr[ind];
        if (ind < 0)
            return 0;
        if (dp[ind] != -1)
            return dp[ind];
        int pick = arr[ind] + func(ind - 2, arr, dp);
        int nonPick = 0 + func(ind - 1, arr, dp);
        return dp[ind] = max(pick, nonPick);
    }
};