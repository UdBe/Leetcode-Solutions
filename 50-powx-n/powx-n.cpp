class Solution {
public:
    double myPow(double x, int n) {

        // Base Case

        if (n == 0) {
            return 1;
        } else if (x == 0) {
            return 0;
        }

        // Recursive Calls

        if ((n % 2) == 0) {
            if (n < 0) {
                return (1 / (myPow(x * x, abs(n) / 2)));
            }
            return myPow(x * x, abs(n) / 2);
        } else {
            if (n < 0) {
                return (1 / (x * myPow(x * x, abs(n) / 2)));
            }
            return x * myPow(x * x, abs(n) / 2);
        }
    }
};