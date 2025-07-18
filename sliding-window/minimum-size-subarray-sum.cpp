class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int count = nums.size();
        for(int i = 0; i < nums.size(); i++){
            sum+= nums[i];
        }
        if(sum < target){
            return 0;
        }
        
        int right = nums.size()-1;
        int left = 0;
        int out = nums.size();
        while(left <= right){
            if(nums[left] <= nums[right]){
                sum = sum - nums[left];
                left++;                
                count--;
            }
            else{
                sum = sum - nums[right];
                right--;
                count--;
            }
            if(sum >= target){
                out = min(out, count);
            }
            if(sum < target){
                break;
            }
        }
        return out;

    }
};