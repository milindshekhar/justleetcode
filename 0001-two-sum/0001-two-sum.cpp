class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int need=target-nums[i];
            if(mpp.count(need))
            {
               
                ans.push_back(i);
                ans.push_back(mpp[need]);
                break;
            }
            mpp[nums[i]]=i;
        }
        return ans ;
    }
};