class Solution {
public:
    int trailingZeroes(int n) {
        int out = 0;
        while(n > 0){
            out = out + n/5;
            n = n/5;
        }
        return out;
    }
};