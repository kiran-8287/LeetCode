class Solution {
public:
    unordered_map<int, long long> memo;
    int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        if(memo.count(n)){return memo[n];}
        return memo[n] = climbStairs(n-1)+climbStairs(n-2);
    }
};