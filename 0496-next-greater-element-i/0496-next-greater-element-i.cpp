class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            int ele=nums1[i];
            int pos=-1;
            for(int j=0;j<nums2.size();j++)
            {
                if(ele == nums2[j])
                {
                    pos=j;
                    break;
                }
            }
            int next=-1;
            for(int k=pos+1;k<nums2.size();k++)
            {
                if(nums2[k]>ele)
                {
                    next=nums2[k];
                    break;
                }
            }
            ans.push_back(next);
        }
        return ans;
    }
};