class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> map;
        if(n==1||n==0){
            map[n] = 1;
        }
        else if(n<0){
            return 0;
        }
        if(map[n] == 0){
           int temp = climbStairs(n-1)+climbStairs(n-2);
           map[n] = temp;
        }
        return map[n];
    }
};