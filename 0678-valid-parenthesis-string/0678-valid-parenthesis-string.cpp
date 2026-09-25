class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return checkValidParanthesis(s, 0, 0, dp);
    }

private:
    bool checkValidParanthesis(string& s, int index, int count,
                               vector<vector<int>>& dp) {
        if (count < 0)
            return false;
        if (index == s.size())
            return count == 0;
        if (dp[index][count] != -1)
            return dp[index][count];
        bool ans = false;
        if (s[index] == '(') {
            ans = checkValidParanthesis(s, index + 1, count + 1, dp);
        } else if (s[index] == ')') {
            ans = checkValidParanthesis(s, index + 1, count - 1, dp);
        } else {
            ans = checkValidParanthesis(s, index + 1, count + 1, dp) ||
                  checkValidParanthesis(s, index + 1, count - 1, dp) ||
                  checkValidParanthesis(s, index + 1, count, dp);
        }
        return dp[index][count] = ans;
    }
};