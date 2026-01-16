class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        func(0, nums.size(), nums, ans, arr);
        return ans;
    }
    void func(int index, int size, vector<int>& nums, vector<vector<int>>& ans,
              vector<int>& arr) {
        if (index == size) {
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        func(index + 1, size, nums, ans, arr);
        arr.pop_back();
        func(index + 1, size, nums, ans, arr);
    }
};