class Solution {
public:
    int reverse(int x) {
        int out = 0;
        int temp = abs(x);
        int n = 0;
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