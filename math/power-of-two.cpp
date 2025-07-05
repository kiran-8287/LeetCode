class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n%2==1 && n!=1){return false;}
        else{
            return true;
        }
        return isPowerOfTwo(n/2);
    }
};