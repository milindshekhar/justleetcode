class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> counts;
        vector<bool> visited(arr.size(),false);
        for (int i = 0; i < arr.size(); i++) {
            int count = 0;
            if (visited[i]) continue;
            for (int j = 0; j < arr.size(); j++) {
                if (arr[i] == arr[j] && !visited[j])
                {
                    count++; 
                    visited[j]=true;   
                } 
            }
            counts.push_back(count);
        }

        for (int i = 0; i < counts.size(); i++) {
            for (int j = i+1; j < counts.size(); j++) {
                if (counts[i] == counts[j]) return false;
            }
        }

        return true;
    }
};
