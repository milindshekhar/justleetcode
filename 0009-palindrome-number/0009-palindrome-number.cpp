class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string res = s;
        reverse(res.begin(),res.end());
        return s == res;
    }
};