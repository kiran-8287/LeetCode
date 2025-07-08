class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int total = 0;
        int r = cost.size() - 1;
        while(r >= 1){
            if(cost[r] < cost[r-1]){
                total += cost[r];
                r--;
            }
            else if(cost[r] >= cost[r-1]){
                total += cost[r-1];
                r = r-2;
            }
        }
        return total;
    }
};