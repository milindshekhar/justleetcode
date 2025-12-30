class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int countBreaks=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                countBreaks++;
            }
        }
        if(nums[n-1]>nums[0]) countBreaks++;
        return countBreaks<=1;
    }
};