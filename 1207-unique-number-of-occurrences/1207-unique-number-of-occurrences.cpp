class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;
        unordered_set<int> set;
        for (int c : arr) {
            mpp[c]++;
        }
        for (auto& p : mpp) {
            if (set.count(p.second)) {
                return false;
            }
            set.insert(p.second);
        }
        return true;
    }
};