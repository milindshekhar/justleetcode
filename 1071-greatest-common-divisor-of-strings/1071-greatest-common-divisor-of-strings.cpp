class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = min(str1.size(), str2.size());
        for (int i = n; i >= 1; i--) {
            string part = str1.substr(0, i);
            if (isValid(str1, part) && isValid(str2, part)) {
                return part;
            }
        }
        return "";
    }
    bool isValid(const string& str, const string& part) {
        int times = str.size() / part.size();
        string formed = "";
        for (int i = 0; i < times; i++) {
            formed += part;
        }
        return formed == str;
    }
};