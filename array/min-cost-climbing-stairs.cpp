class Solution {
public:
    int func(int i, vector<int>& cost,vector<int>& dp){
        if(i ==0 or i == 1){
            return cost[i];
        }
        if(dp[i] != -1){
            return dp[i];
        }
        dp[i] = cost[i] + min(func(i-1,cost,dp),func(i-2,cost,dp));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        int res = min(func(n-1,cost,dp),func(n-2,cost,dp));
        return res;
    }
};