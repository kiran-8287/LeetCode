class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prev_min = INT_MAX;
        int prev_max = INT_MIN;
        for(int p: prices){
            prev_min = min(prev_min, p);
            int profit = p - prev_min;
            prev_max = max(prev_max, profit);
        }
        if(prev_max <= 0){
            return 0;
        }
        return prev_max;
    }
};