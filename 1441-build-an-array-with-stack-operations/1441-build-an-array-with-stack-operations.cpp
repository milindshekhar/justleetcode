class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        stack<int> st;
        int j=0;
        for(int i=1;i<=n&&j<target.size();i++)
        {
            st.push(i);
            ops.push_back("Push");
            if(st.top()==target[j])
            {
                j++;
            }
            else
            {
                st.pop();
                ops.push_back("Pop");
            }
        }
        return ops;
    }
};