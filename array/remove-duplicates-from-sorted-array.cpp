class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int looper = 0;
        for (int i = 1; i < nums.size(); i ++){
            if(nums[i] != nums[looper]){
                looper++;
                nums[looper] = nums[i];
            }
        }
        return looper+1;
    }
};