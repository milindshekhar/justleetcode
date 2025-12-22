class Solution {
public:
    bool isPalindrome(string s) {
     
        string newString="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                s[i]=tolower(s[i]);
                newString+=s[i];
            }
        }
        int end=newString.size()-1;
        int start=0;
        while(start<end)
        {
            if(newString[start]==newString[end])
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};