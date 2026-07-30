class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size() + 1, -1));
        return  func(0, -1, nums, dp);
    }
    int func(int i, int prevInd, vector<int>& nums, vector<vector<int>>& dp) {
        if (i == nums.size() - 1) {
            if (prevInd == -1 || nums[prevInd] < nums[i]) {
                return 1;
            }
            return 0;
        }
        if (dp[i][prevInd + 1] != -1)
            return dp[i][prevInd + 1];
        int notTake = 0 + func(i + 1, prevInd, nums, dp);
        int take = 0;
        if (prevInd == -1) {
            take = func(i + 1, i, nums, dp) + 1;
        } else if (nums[i] > nums[prevInd]) {
            take = func(i + 1, i, nums, dp) + 1;
        }
        return dp[i][prevInd + 1] = max(take, notTake);
    }
};