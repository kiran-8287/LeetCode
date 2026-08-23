class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k == nums.size()){
            return;
        }
        int left = 0;
        int right = nums.size()-1-k;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};