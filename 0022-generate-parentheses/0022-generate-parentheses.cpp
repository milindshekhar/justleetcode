class Solution {
public:
    void genFunc(int i, string s, int open, int close, vector<string> &ans,
                 int n) {
        if (close > open)
            return;
        if (open == close && i == 2 * n) {
            ans.push_back(s);
            return;
        }
        if (open > n) {
            return;
        }
        genFunc(i + 1, s + '(', open + 1, close, ans, n);
        if (open > close) {
            genFunc(i + 1, s + ')', open, close + 1, ans, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        genFunc(0, "", 0, 0, ans, n);
        return ans;
    }
};