class Solution {
private:
    void func(int index, int size, vector<int>& nums, vector<int>& arr,
              vector<vector<int>>& ans) {

        if (index == size) {
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        func(index + 1, size, nums, arr, ans);
        arr.pop_back();
        int nextIndex = index;
        while (nextIndex < size && nums[index] == nums[nextIndex]) {
            nextIndex++;
        }
        func(nextIndex, size, nums, arr, ans);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(), nums.end()); 
        vector < vector<int>> ans;
        vector<int> arr;
        func(0, nums.size(), nums, arr, ans);
        return ans;
    }
};