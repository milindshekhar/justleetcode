class Solution {
public:
    vector<string> generateParenthesis(int n) {
        //your code goes here
        vector<string> ans;
        func(0,0,n,"",ans);
        return ans;
    }
    void func(int open,int close,int n,string s,vector<string> &ans)
    {
        if(open == close && (open+close) == 2*n)
        {
            ans.push_back(s);
            return;
        }
        if(open<n)
        {
            func(open+1,close,n,s+'(',ans);
        }
        if(close<open)
        {
            func(open,close+1,n,s+')',ans);
        }
    }
};