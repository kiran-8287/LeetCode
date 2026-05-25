class Solution {
public:
    unordered_map<int,int> map;
    int climbStairs(int n) {
        if(n==0 or n ==1){
            return 1;
        }
        if(map[n] != 0){
            return map[n];
        }
        else{
            map[n] = climbStairs(n-1)+climbStairs(n-2);
        }
        return map[n];
    }
};