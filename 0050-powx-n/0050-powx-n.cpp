class Solution {
public:
    double myPow(double x, int n) {
        // your code goes here
        if (n == 0) return 1.0000;
        if (x == 0.0) return 0.0000;
        long long power = n;
        if (n < 0) {
            x = 1 / x;
            power = -1 * power * 1LL;
        }
        return recursionMyPow(x, power);
    }
    double recursionMyPow(double x, long long power) {
        if (power == 0) return 1.0000;
        if (power == 1) return x;
        if (power % 2 == 0) {
           return recursionMyPow(x * x, power / 2);
        } else {
           return x * recursionMyPow(x, power - 1);
        }
    }
};