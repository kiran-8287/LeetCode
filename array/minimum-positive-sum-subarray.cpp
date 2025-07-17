class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < l; i++) {
            sum1 += nums[i];
        }
        for (int i = 0; i < r; i++) {
            sum2 += nums[i];
        }
        int min1 = 1000*100;
        int min2 = 1000*100;
        if (sum1 > 0) {
                min1 = min(min1, sum1);
        }
        if (sum2 > 0) {
                min2 = min(min2, sum2);
            }
        int right = l;
        int start = 0;
        while (right < nums.size()) {
            sum1 = sum1 - nums[start] + nums[right];
            right++;
            start++;
            if (sum1 > 0) {
                min1 = min(min1, sum1);
            }
        }
        right = r;
        start = 0;
        while (right < nums.size()) {
            sum2 = sum2 - nums[start] + nums[right];
            right++;
            start++;
            if (sum2 > 0) {
                min2 = min(min2, sum2);
            }
        }
        if(min1 < 1000*100 || min2 < 1000*100){
            return min(min1, min2);
        }
        return -1;
    }
};