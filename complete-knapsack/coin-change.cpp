class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0){return 0;}
        int sum = amount;
        int i = coins.size()-1;
        int count = 0;
        while(i >= 0 && sum >=0){
            if(sum >= coins[i]){
                count += sum/coins[i];
                sum = sum - coins[i]*(sum/coins[i]);
            }
            i--;
        }
        if(count == 0 || sum != 0){
            return -1;
        }
        return count;
    }
};