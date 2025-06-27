class Solution {
public:
    int nextGreaterElement(int n) {
        int temp = n;
        int num = 0;
        while(n > 0){
            num = (n%10) + num*10;
            n = n/10;
        }
        if(num > temp){return num;}
        return -1;
    }
};