class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        int m = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(i == nums.size()-1){
                if(nums[i] < nums[i-1]){
                    nums[i] = nums[i-1];
                    count++;
                }
            }
            else if(nums[i] > nums[i+1]){
                if(i!=0 && nums[i+1] < nums[i-1]){
                    return false;
                }
                nums[i] = nums[i+1];
                count++;
            }      
        }
        if(count == 1){
            return true;
        }
        return false;
    }
};