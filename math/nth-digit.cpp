class Solution {
public:
    int findNthDigit(int n) {
        if(n < 10){
            return n;
        }
        string temp = "";
        for(int i = 1; i <= n; i++){
            temp = temp + to_string(i);
       }
    return temp[n-1] - '0';
    }
};