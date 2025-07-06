class Solution {
public:
    int givesum(int n){
        int sum = 0;
        while(n>0){
            sum = sum + n%10;
            n = n / 10;
        }
        return sum;
    }
    int addDigits(int num) {
        if(num <= 9){return num;}
        int temp = givesum(num);
        while(temp >= 10){
            temp = givesum(temp);
        }
        return temp;
    }
};