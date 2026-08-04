class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] - nums[i - 1] != 1) {
                int diff = nums[i] - nums[i - 1] - 1;
                while (diff > 0) {
                    ans.push_back(nums[i] - diff);
                    diff--;
                }
            }
        }
        return ans;
    }
};