class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        unordered_map<int,bool> map;
        while(true){
            if(map[n] == true){
                return false;
            }
            else{
                map[n] = true;
                int sum = 0;
                while(n!=0){
                    sum = sum + pow(n%10,2);
                    n = n/10;
                }
                if(sum == 1){
                    return true;
                }
                n = sum;
            }
        }
        return false;
    }
};