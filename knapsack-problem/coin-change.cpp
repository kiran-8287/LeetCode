class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,amount+1);
        dp[0] = 0;
        for(int i = 1; i <= amount; i++){
            for(int c: coins){
                if(i >= coin){
                    dp[i] = min(dp[i],1+dp[i-c]);
                }
            }
        }
        int ans = dp[amount];
        if(ans == amount){
            return -1;
        }
        return ans;
    }
};