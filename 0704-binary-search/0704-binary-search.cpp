class Solution {
public:
    int binarySearchHelper(vector<int>& nums, int low, int high, int target) {
        if (low > high)
            return -1;
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            return binarySearchHelper(nums, low, mid - 1, target);
        else
            return binarySearchHelper(nums, mid + 1, high, target);
    }
    int search(vector<int>& nums, int target) {
        return binarySearchHelper(nums, 0, nums.size() - 1, target);
    }
};