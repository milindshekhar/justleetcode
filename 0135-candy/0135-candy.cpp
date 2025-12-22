class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> leftIteration(n,1);
        leftIteration[0]=1;
        vector<int> rightIteration(n,1);
        rightIteration[n-1]=1;
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                leftIteration[i]=leftIteration[i-1]+1;
            }
            
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                rightIteration[i]=rightIteration[i+1]+1;
            }
           
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+max(leftIteration[i],rightIteration[i]);
        }
        return sum;
    }
};