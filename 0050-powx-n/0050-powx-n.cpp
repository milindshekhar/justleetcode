class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0.0 && n == 0) return 1.0;
        if (n == 0) return 1.0;
        if (x == 0.0) return 0;

        long long powN = n;
        if (n < 0) {
            x = 1 / x;
            powN = -powN;
        }
        double ans = 1.0;
        while (powN > 0) {
            if (powN % 2 == 0) {
                x = x * x;
                powN /= 2;
            } else {
                ans = ans * x;
                powN--;
            }
        }
        return ans;  
    }
};