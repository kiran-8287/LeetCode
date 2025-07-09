class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==1 || c==0){
            return true;
        }
        int l = 0;
        int r = c/2;
        while(l<=r){
            if(pow(l,2) + pow(r,2) == c){
                return true;
            }
            else if(pow(l,2) + pow(r,2) > c){
                r--;
            }
            else if(pow(l,2) + pow(r,2) < c){
                l++;
            }
        }
        return false;
    }
};