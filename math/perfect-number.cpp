class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num%2 == 1){return false;}
        long sum = 0;
        long temp = num;
        while(temp > 0){
            temp = temp /2 ;
            sum += temp;
            if(temp%2 == 1 && temp != 1){
                temp+=1;
            }
        }
        if(sum == num){return true;}
        return false;
    }
};