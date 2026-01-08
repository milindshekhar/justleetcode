class Solution {
public:
    int n, m;
     long long dp[501][501];
     long long solve(int i, int j, vector<int>& nums1, vector<int>& nums2) {
        if (i == n || j == m)
           return LLONG_MIN / 4;
        if (dp[i][j] != -1)
            return dp[i][j];
        long long take =
            nums1[i] * nums2[j] + max(0LL, solve(i + 1, j + 1, nums1, nums2));
        long long skip1 = solve(i + 1, j, nums1, nums2);
        long long skip2 = solve(i, j + 1, nums1, nums2);
        return dp[i][j] = max({take, skip1, skip2});
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        n = nums1.size();
        m = nums2.size();
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, nums1, nums2);
    }
};