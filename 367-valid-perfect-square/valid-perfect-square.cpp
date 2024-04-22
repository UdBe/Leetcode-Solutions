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

        long int i = 2; 
        if(num == 1){ 
            return true; 
        }
        while ( i * i < num){ 
            i*=2; 
        }
        return  BinarySearch(i/2, i, num);
    }
};