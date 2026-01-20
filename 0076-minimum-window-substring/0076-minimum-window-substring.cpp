class Solution {
public:
    string minWindow(string s, string t) {
        int hash[256] = {0};
        for (char c : t) {
            hash[static_cast<char>(c)]++;
        }
        int left = 0, right = 0;
        int minLen = INT_MAX;
        int sIndex = -1;
        int count = 0;
        while (right < s.size()) {
            if (hash[static_cast<char>(s[right])] > 0) {
                count++;
            }
            hash[static_cast<char>(s[right])]--;
            while (count == t.size()) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    sIndex = left;
                }
                hash[static_cast<char>(s[left])]++;
                if (hash[static_cast<char>(s[left])] > 0) {
                    count--;
                }
                left++;
            }
            right++;
        }
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};