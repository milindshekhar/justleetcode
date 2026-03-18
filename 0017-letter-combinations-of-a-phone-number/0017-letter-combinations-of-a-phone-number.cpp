class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        static const string combos[] = {"",    "",    "abc",  "def", "ghi",
                                        "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> ans;
        string s;

        backtrack(0, digits, s, ans, combos);
        return ans;
    }
    void backtrack(int ind, const string& digits, string& s,
                   vector<string>& ans, const string combos[]) {

        if (ind == digits.size()) {
            ans.push_back(s);
            return;
        }

        int digit = digits[ind] - '0';

        for (char c : combos[digit]) {
            s.push_back(c); 
            backtrack(ind + 1, digits, s, ans, combos);
            s.pop_back(); 
        }
    }
};