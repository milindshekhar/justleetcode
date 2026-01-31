class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for (int c : arr) {
            mpp[c]++;
        }
        vector<int> counts;
        for (auto& p : mpp) {
            counts.push_back(p.second);
        }
        sort(counts.begin(), counts.end());
        for (int i = 0; i < counts.size() - 1; i++) {
            if (counts[i] == counts[i + 1])
                return false;
        }
        return true;
    }
};