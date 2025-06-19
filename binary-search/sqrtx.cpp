class Solution {
public:
    int mySqrt(int x) {
        long max = 0;
        for(long i = 1; i <= x ; i++){
            if (i*i <= x && i > max){
                max = i;
            }
        }
        return max;
    }
};