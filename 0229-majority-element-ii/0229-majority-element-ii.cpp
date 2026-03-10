class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int mini = int(nums.size() / 3) + 1;
        vector<int> ans;
        for (int c : nums) {
            mpp[c]++;
            if (mpp[c] == mini)
                ans.push_back(c);
        }
        return ans;
    }
};