class Solution {
public:
    bool check(vector<int>& nums) {
        int idx = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i]){
                idx = i;
                break;
            }
        }
        int start_idx = idx;
        int n = nums.size();
        while(true){
            if((idx+1)%n != start_idx && nums[idx] > nums[(idx+1)%n]){
                return false;
            }
            idx = (idx+1)%n;
            if(idx == start_idx){
                break;
            }
        }
        return true;
    }
};