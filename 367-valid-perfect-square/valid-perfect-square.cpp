class Solution {
public:
    bool BinarySearch(int s, int e, int num) {
        long int mid = (s + e) / 2;

        while (s <= e) {
            if (mid * mid == num) {
                return true;
            } else if (mid * mid > num) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = (s + e) / 2;
        }
        return false;
    }
    bool isPerfectSquare(int num) {
        return  BinarySearch(0, num, num);
    }
};