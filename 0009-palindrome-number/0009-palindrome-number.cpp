class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long num = x;
        long long ans = 0;
        while (num > 0) {
            long long a = num % 10;
            ans = ans * 10 + a;
            num /= 10;
        }
        return ans == x;
    }
};