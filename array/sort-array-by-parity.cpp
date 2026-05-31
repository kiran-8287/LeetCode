class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for(int j = 0; j < n; j ++){
            if(nums[j]%2 != 1){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return nums;
    }
};