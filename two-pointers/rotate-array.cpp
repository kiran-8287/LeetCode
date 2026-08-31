class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res(nums.size(),0);
        k = k%nums.size();
        for(int i = 0; i < k; i++){
            res[i] = nums[nums.size()-k+i];
        }
        for(int i = 0; i < nums.size()-k; i++){
            res[i+k] = nums[i];
        }
        nums = res;
    }
};