class Solution {
public:
    bool isUgly(int n) {
        int m = n;
        if(m > 0){
        while(m > 1 ){
            if(m%2==0){
                m = m/2;
            }
            else if(m%3 == 0){
                m = m/3;
            }
            else if(m%5 == 0){
                m = m/5;
            }
            else{
                return false;
            }
        }
        }
        else{
            while(m != -1 ){
            if(m%2==0){
                m = m/2;
            }
            else if(m%3 == 0){
                m = m/3;
            }
            else if(m%5 == 0){
                m = m/5;
            }
            else{
                return false;
            }
        }
        }
        return true;
    }
};