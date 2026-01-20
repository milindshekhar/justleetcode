class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double maxAvg = sum / k;
        int left = 0, right = k - 1;
        while (right < nums.size() - 1) {
            sum -= nums[left];
            left++;
            right++;
            sum += nums[right];
            maxAvg = max(maxAvg, sum / k);
        }
        return maxAvg;
    }
};