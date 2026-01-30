class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxC = INT_MIN;
        for (int i = 0; i < candies.size(); i++) {
            maxC = max(maxC, candies[i]);
        }
        vector<bool> ans;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxC) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};