class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int m = (r+l)/2;
            if(nums[m] > nums[r]){
                int temp = nums[m];
                nums[m] = nums[r];
                nums[r] = temp;
                r--;
            }
            else if(nums[m] < nums[l]){
                int temp = nums[m];
                nums[m] = nums[l];
                nums[l] = temp;
                l++;
            }
            else{
                r--;
                l++;
            }
        }
        return nums[0];
    }
};