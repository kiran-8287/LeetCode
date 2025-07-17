class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i = 0 ; i < k; i++){
            sum += nums[i];
        }
        double max = sum/k;
        for(int i = 0; i < nums.size()-k; i++){
            sum = sum - nums[i] + nums[i+k];
            if(sum/k > max){
                max = sum/k;
            }
        }
        return max;
    }
};