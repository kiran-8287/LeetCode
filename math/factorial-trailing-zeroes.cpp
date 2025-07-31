class Solution {
public:
    int trailingZeroes(int n) {
        int out = 0;
        int i = 1;
        while(n/(pow(5,i)) > 0){
            out = out + n/(pow(5,i));
            i++;
        }
        return out;
    }
};