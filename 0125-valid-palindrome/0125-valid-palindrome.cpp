class Solution {
public:
    bool isPalindrome(string s) {
        string newString;
        for (char ch : s) {
            if (isalnum(ch)) {
                newString += tolower(ch);
            }
        }
        int j = newString.size() - 1;
        int i = 0;
        while (i < j) {
            if (newString[i] != newString[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};