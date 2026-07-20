class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty())
            return 0;
        int sizeOfArray = height.size();
        int prefixArray[sizeOfArray];
        int suffixArray[sizeOfArray];
        prefixArray[0] = height[0];
        suffixArray[sizeOfArray - 1] = height[sizeOfArray - 1];
        for (int i = 1; i < sizeOfArray; i++) {
            prefixArray[i] = max(height[i], prefixArray[i - 1]);
            if (sizeOfArray - i - 2 >= 0) {
                suffixArray[sizeOfArray - 1 - i] = max(
                    height[sizeOfArray - 1 - i], suffixArray[sizeOfArray - i]);
            }
        }
        int total = 0;
        for (int i = 0; i < sizeOfArray; i++) {
            if (height[i] < prefixArray[i] && height[i] < suffixArray[i]) {
                total += (min(prefixArray[i], suffixArray[i]) - height[i]);
            }
        }
        return total;
    }
};