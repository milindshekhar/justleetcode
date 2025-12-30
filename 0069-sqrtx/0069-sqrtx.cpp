class Solution {
public:
    int mySqrt(int x) {
        int low=1,high=x;
        long long ans=0;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            long long val=1LL*mid*mid;
            if(val<=x)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};