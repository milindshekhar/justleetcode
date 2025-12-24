class Solution {
public:
 int binarySearch(vector<int> &ans)
  {
    sort(ans.begin(),ans.end());
    int low=0,high=ans.size()-1;
    int lowestIndex=-1;
    while(low<=high)
    {
      int mid=low+(high-low)/2;
     
        if(ans[mid]==1)
        {
          lowestIndex=mid;
           high=mid-1;
        }
       
      
      else
      {
        low=mid+1;
      }
    }
    if(lowestIndex == -1) return 0;
    return ans.size()-lowestIndex;
  }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
         int n=mat.size();
      int ans=0;
      int maxOnes=0;
      for(int i=0;i<n;i++)
      {
        int count=binarySearch(mat[i]);
        if(count>maxOnes)
        {
          maxOnes=count;
          ans=i;
        }
      }
      return {ans,maxOnes};
        
    }
};