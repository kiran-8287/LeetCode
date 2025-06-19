class Solution {
public:
    int mySqrt(int x) {
        int max = 0;
        for(int i = 1; i <= x ; i++){
            if (i*i <= x && i > max){
                max = i;
            }
        }
        return max;
    }
};