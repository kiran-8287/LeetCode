class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int min_idx = 0;
        int max_idx = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                max_idx = i;
            }
            if(nums[i] < mini){
                mini = nums[i];
                min_idx = i;
            }
        }
        if(maxi == mini){
            return 1;
        }
        int l = min(min_idx, max_idx);
        int r = max(min_idx,max_idx);
        if(l+1+nums.size()-r < r+1 && l+1+nums.size()-r < r-l+1){
            return l+1+nums.size()-r;
        }
        else{
            if(r+1 < r-l+1){
                return r+1;
            }
            return r-l+1;
        }
        return 1;
    }
};