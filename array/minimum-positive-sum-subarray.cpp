class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum1 = 0;
        for (int i = 0; i < l; i++) {
            sum1 += nums[i];
        }
        int min1 = INT_MAX;
        int right = l;
        int start = 0;
        while (start < nums.size()-right) {
            if (sum1 > 0) {
                min1 = min(min1, sum1);
            }
            sum1 = sum1 - nums[start] + nums[right];
            right++;
            start++;
            
        }
        
        int sum2 = 0;
        int min2 = INT_MAX;
        right = r;
        start = 0;

        for (int i = 0; i < r; i++) {
            sum2 += nums[i];
        }
        
        while (start < nums.size()-right) {
            if (sum2 > 0) {
                min2 = min(min2, sum2);
            }
            sum2 = sum2 - nums[start] + nums[right];
            right++;
            start++;
        }
        if(min1 < 1000*100 || min2 < 1000*100){
            return min(min1, min2);
        }
        return -1;
    }
};