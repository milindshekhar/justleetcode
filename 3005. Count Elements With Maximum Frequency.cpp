class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxFreq = 0;
        vector<bool> visited(nums.size(),false);
        unordered_map<int,int> keyValueVec;
        for(int i=0;i<nums.size();i++)
        {
                if(visited[i])
                {
                    continue;
                }
                int freq = 0;
                for(int j=i;j<nums.size();j++)
                {
                    if(nums[i] == nums[j])
                    {
                            freq++;
                    }
                }
               keyValueVec.emplace(nums[i],freq);
               if(freq > maxFreq)
               {
                maxFreq=freq;
               }
        }
        int count = 0;
        for (const auto &pair : keyValueVec) {
            if(pair.second == maxFreq)
            {
                count=count+maxFreq;
            }
      
    }
    return count;
        
        
    }
};

//TC - O(n^2) + O(n)
//SC - O(n) + O(n)


class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> numFreq;
        int maxFreq = 0,count = 0;
        for(int num:nums)
        {
            numFreq[num]++;
            maxFreq=max(maxFreq,numFreq[num]);
        }
        for(const auto &pair:numFreq)
        {
            if(pair.second == maxFreq)
            {
                count = count + maxFreq;
            }
        }
        return count;
        
    }
};
//TC -  O(n)
//SC - O(n) 
