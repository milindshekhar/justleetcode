class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int el1 = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                count = 1;
                el1 = nums[i];
            } else if (el1 == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return el1;
    }
};