class Solution {
public:
    int trailingZeroes(int n) {
        bool goteven = false;
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(i % 10 == 0){
                count++;
            }
            else{
                if(i%2 == 0){
                    goteven = true;
                }
                else{
                    if(i%5 == 0 & goteven == true){
                        count++;
                        goteven = false;
                    }
                }
            }
        }
        return count;
    }
};