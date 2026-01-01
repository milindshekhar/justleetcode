class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        stack<int> st;
        for(int i=0;i<nums2.size();i++)
        {
            int next=-1;
            for(int j=i+1;j<nums2.size();j++)
            {
                if(nums2[j]>nums2[i])
                {
                    next=nums2[j];
                    break;
                }
            }
            mpp[nums2[i]]=next;
        }
       vector<int> ans;
       for(int x:nums1)
       {
        ans.push_back(mpp[x]);
       }
       return ans;
    }
};