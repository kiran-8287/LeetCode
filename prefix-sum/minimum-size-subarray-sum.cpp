class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int right = 0;
        int out = nums.size()+1;
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[right];

            while(sum >= target){
                out = min(out, right - left + 1);
                sum = sum - nums[left];                
                left++;
            }
            right++;
        }
        if(out == nums.size()+1){
            return 0;
        }
        return out;
    }
};