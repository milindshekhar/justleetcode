class Solution {
public:
    int findContentChildren(vector<int>& Student, vector<int>& Cookie) {
        sort(Student.begin(), Student.end());
        sort(Cookie.begin(), Cookie.end());
        int left = 0, right = 0;
        while (left < Student.size() && right < Cookie.size()) {
            if (Student[left] <= Cookie[right]) {
                left++;
                right++;
            } else {
                right++;
            }
        }
        return left;
    }
};