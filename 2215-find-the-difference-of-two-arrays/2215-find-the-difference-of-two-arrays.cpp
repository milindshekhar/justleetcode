class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a, b;
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        for (int c : s1) {
            if (s2.find(c) == s2.end()) {
                a.push_back(c);
            }
        }
        for (int c : s2) {
            if (s1.find(c) == s1.end()) {
                b.push_back(c);
            }
        }
        return {a, b};
    }
};