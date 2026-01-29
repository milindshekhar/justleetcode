class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int lenWord1 = word1.size(), lenWord2 = word2.size();
        string ans ="";
        int left = 0, right = 0;
        while (left < lenWord1 && right < lenWord2) {
            ans += word1[left++];
            ans += word2[right++];
        }
        while (left < lenWord1)
            ans += word1[left++];
        while (right < lenWord2)
            ans += word2[right++];
        return ans;
    }
};