class Solution {
public:
    int trailingZeroes(int n) {
        int out = 0;
        int i = 1;
        while(n > 0){
            n = n/(pow(5,i))
            out = out + n;
            i++;
        }
        return out;
    }
};