class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, pos = nums.size() - 1;
        vector<int> ans(nums.size());
        while (l <= r) {
            if (abs(nums[l]) > abs(nums[r])) {
                ans[pos--] = nums[l] * nums[l];
                l++;
            } else {
                ans[pos--] = nums[r] * nums[r];
                r--;
            }
        }
        return ans;
    }
};