class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long sum=0;int counter=0;int subInd=1;
        for(int i=happiness.size()-1;i>=0;i--)
        {
            if(i == happiness.size()-1) sum+=happiness[i];
            else
            {
               if(happiness[i]-subInd < 0) break;
                sum=sum+happiness[i]-subInd;
                subInd++;
            }
            
            counter++;
            if(counter == k) break;
        }
        return sum;
    }
};