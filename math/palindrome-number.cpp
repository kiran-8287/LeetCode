class Solution {
public:
    bool isPalindrome(int x) {
        long temp = x;
        long num = 0;
        while(temp>0){
            num = num*10 + temp % 10;
            temp = temp / 10;
        }
        if(x == num){return true;}
        return false;
    }
};