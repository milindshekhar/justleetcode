class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int mpp[26]={0};
        for(char c:magazine)
        {
            mpp[c-'a']++;
        }
        for(char c:ransomNote)
        {
            if(mpp[c-'a']>0)
            {
                mpp[c-'a']--;
            }
            else
            {
                return false;
            }
        }
        return true;

    }
};