class Solution {
public:
    int reverse(int x) {
        if(x > pow(2, 31) - 1 || x < -pow(2, 31)){return 0;}
        long temp = abs(x);
        long n = 0;
        while(temp > 0){
            n = n*10 + temp%10;
            temp = temp/10;
        }
        if(x < 0){
            n = -n;
        }
        return n;
    }
};