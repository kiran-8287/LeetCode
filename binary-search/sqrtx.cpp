class Solution {
public:
    int mySqrt(int x) {
        long left = 0;
        long right = x;
        long num = 0;
        if (x == 1) {
            return 1;
        }
        while (left <= right) {
            long mid = left + (right - left) / 2;
            if (mid * mid <= x) {
                num = mid;
                left = mid + 1;
            } else if (mid * mid > x) {
                right = mid - 1;
            }
        }
        return num;
    }
};