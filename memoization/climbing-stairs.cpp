class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> map;
        if(n==0 || n==1){
            return 1;
        }
        if(map[n] == 0){
            map[n] = climbStairs(n-1) + climbStairs(n-2);
        }
        return map[n];
    }
};