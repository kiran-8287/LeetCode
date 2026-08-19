class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i = nums.size()-1; i>=0; i--){
            for(int j = i; j>=0; j--){
                if(i!=j && nums[j]<=nums[i]){
                    if(nums[i] - nums[j] >= maxi){
                        maxi = nums[i] - nums[j];
                    }
                }
            }
        }
        if(maxi == INT_MIN){
            return 0;
        }
        return maxi;
    }
};