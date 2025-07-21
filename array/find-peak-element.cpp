class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        while(l <= r){
            int mid = (r+l)/2;
            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]){
                return mid;
            }
            else if(nums[mid] > nums[mid+1] && nums[mid] < nums[mid-1]){
                r = mid-1;
            }
            else if(nums[mid] < nums[mid+1] && nums[mid] > nums[mid-1]){
                l = mid + 1;
            }
            else{
                l++;
            }
        }
        return nums[l];
    }
};