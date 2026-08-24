class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        for(int r = 0; r < nums.size(); r++){
            if(nums[r]!=2){
                int temp = nums[r];
                nums[r] = nums[l];
                nums[l] = temp;
                l++;
            }
        }
        int n = l;
        l = 0;

        for(int k = 0; k < n; k++){
            if(nums[k]!=1){
                int temp = nums[k];
                nums[k] = nums[l];
                nums[l] = temp;
                l++;
            }
        }
    }
};