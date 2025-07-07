class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0];
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
            int m = (r+l)/2;
            if(nums[m] < min){
                min = nums[m];
            }
            if(nums[l] < min){
                min = nums[l];
            }
            if(nums[r] < min){
                min = nums[r];
            }
            l++;
            r--;
        }
        return min;
    }
};