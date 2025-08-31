class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> out(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            out[(i+k)%nums.size()] = nums[i];
        }
        nums = out;
    }
};