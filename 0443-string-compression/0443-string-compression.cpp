class Solution {
public:
    int compress(vector<char>& chars) {
     int n=chars.size();
     int idx=0;
     for(int i=0;i<n;)
     {
        char current=chars[i];
        int count=0;
        while(i<n && chars[i]==current)
        {
            i++;
            count++;
        }
        chars[idx++]=current;
        if (count > 1) {
            string cnt = to_string(count);
            for (char c : cnt) {
                chars[idx++] = c;
            }
        }
     }   
     return idx;
    }
};