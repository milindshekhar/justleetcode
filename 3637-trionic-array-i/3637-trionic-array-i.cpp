class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int up = 0, down = 0, up2 = 0;
        int n = nums.size();
        int i = 0;
        while (i < n - 1 && nums[i] < nums[i + 1]) {
            up++;
            i++;
        }
        while (i < n - 1 && nums[i] > nums[i + 1]) {
            down++;
            i++;
        }
        while (i < n - 1 && nums[i] < nums[i + 1]) {
            up2++;
            i++;
        }
        return i == n - 1 && up > 0 && up2 > 0 && down > 0;
    }
};