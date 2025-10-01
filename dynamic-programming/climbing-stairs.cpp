class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int , int> map;
        if(n==0){
            return 1;
        }
        if(n == 1 || n == 2){
            return n;
        }
        if(map.find(n) != map.end()){
            return map[n];
        }
        map[n] = climbStairs(n-1) + climbStairs(n-2);
        return map[n];
    }
};