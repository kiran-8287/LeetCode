class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for(int j = 0; j < n; j++){
            if(nums[j] != 2){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        i = 0;
        for(int j = 0; j < n; j++){
            if(nums[j] == 2){
                break;
            }
            if(nums[j] != 1){
                swap(nums[i],nums[j]);
                i++;
            }   
        }
    }
};