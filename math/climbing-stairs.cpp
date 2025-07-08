class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> map;
        map[0] = 1;
        map[1] = 1;
        if(n==0 || n==1){
            return map[n];
        }
        if(n<0){
            return 0;
        }
        if(map[n] == 0){
            map[n] = climbStairs(n-1) + climbStairs(n-2);
            return map[n];
        }
        else{
            return map[n];
        }
    }
};