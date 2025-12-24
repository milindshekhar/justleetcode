class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left=0,right=0;
        while(right<t.size() && left<s.size())
        {
            if(s[left]==t[right])
            {
                left++;
                right++;
            }
            else
            {
                right++;
            }
        }
        return left == s.size();
    }
};