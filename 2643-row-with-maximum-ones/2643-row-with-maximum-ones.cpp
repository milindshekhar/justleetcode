class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = -1;
        int maxCount = -1;
        int rowSize = mat.size();
        int columnSize = mat[0].size();
        for (int i = 0; i < rowSize; i++) {
            int count = 0;
            for (int j = 0; j < columnSize; j++) {
                count += mat[i][j];
            }
            if (count > maxCount) {
                maxCount = count;
                index = i;
            }
        }
        return {index,maxCount};
    }
};