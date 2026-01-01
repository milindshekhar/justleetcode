class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int prev=0;
        for(int num:target)
        {
            int missing=num-prev-1;
            while(missing--)
            {
                ops.push_back("Push");
                ops.push_back("Pop");
            }
            ops.push_back("Push");
            prev=num;
        }
        return ops;
    }
};