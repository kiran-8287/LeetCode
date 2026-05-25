class Solution {
public:
    int dp(int i, vector<int>& cost){
        if(i ==0 or i == 1){
            return cost[i];
        }
        return cost[i] + min(dp(i-1,cost),dp(i-2,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int res = min(dp(n-1,cost),dp(n-2,cost));
        return res;
    }
};