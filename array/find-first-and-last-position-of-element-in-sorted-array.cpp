class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> out = {-1, -1};
        int l = 0;
        int r = nums.size()-1;

        while(l <= r){
            int m = (r+l)/2;
            if(nums[m] == target){
                int temp = m;
                while(temp > 0  && nums[temp-1] == target) {
                    temp--;
                }
                out[0] = temp;
                temp = m;
                while (temp<nums.size()-1 && nums[temp+1]==target) {
                    temp++;
                }
                out[1] = temp;
                break;
            }
            else if (nums[m] > target) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return out;
    }
};