class Solution {
public:
    int arrangeCoins(int n) {
        int k = (1 + pow(1+8*n,0.5))/2;
        return k-1;
    }
};