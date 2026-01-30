class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maximum = 0, sum = 0;
        for (int g : gain) {
            sum += g;
            maximum = max(maximum, sum);
        }
        return maximum;
    }
};