class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        func(0, target, ans, arr, candidates);
        return ans;
    }
    void func(int index, int target, vector<vector<int>>& ans, vector<int>& arr,
              vector<int>& candidates) {
        if (index == candidates.size() || target < 0)
            return;
        if (target == 0) {
            ans.push_back(arr);
            return;
        }
        arr.push_back(candidates[index]);
        func(index, target - candidates[index], ans, arr, candidates);
        arr.pop_back();
        func(index + 1, target, ans, arr, candidates);
    }
};