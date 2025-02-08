class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)
        {
            return n;
        }
        int first = 1,second = 1;
        for(int i=2;i<=n;i++)
        {
            int current=first+second;
            second = first;
            first=current;
            
        }
        return second;
    }
};

//TC - O(n)
//SC - O(1)
