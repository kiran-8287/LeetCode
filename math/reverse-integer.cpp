class Solution {
public:
    int reverse(int x) {
        long temp = abs(long)x);
        long n = 0;
        while(temp > 0){
            n = n*10 + temp%10;
            temp = temp/10;
        }
        if(x < 0){
            n = -n;
        }
        if(n > pow(2, 31) - 1 || n < -pow(2, 31)){return 0;}
        return (int)n;
    }
};