class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n%2==1 && n!=1){return false;}
        else if (n%2 == 0){
            if(isPowerOfTwo(n/2) == true){return true;}
        }
        return true;
        
    }
};