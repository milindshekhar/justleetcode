class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1)
            return 0;
        int left = 0, right = 0;
        long long prod = 1;
        int count = 0;
        while (right < nums.size()) {
            prod *= nums[right];
            right++;
            while (prod >= k) {
                prod /= nums[left];
                left++;
            }

            count += right - left;
        }
        return count;
    }
};