class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> out  = {-1,-1};
        if(nums.empty() == true){return out;}
        int l = 0;
        int r = nums.size()-1;
        while(l<r){
            int m = (r+l)/2;
            if(nums[m] == target){
                if(nums[m-1] == target){
                    out = {m-1,m};
                    return out;
                }
                else if(nums[m+1] == target){
                    out = {m,m+1};
                    return out;
                }
                else{
                    out = {m,m};
                    return out;
                }
            }
            else if(nums[m] < target){
                l++;
            }
            else{
                r--;
            }
        }
        return out;
    }
};