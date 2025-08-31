class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        for(int i = 0; i < k; i++){
            vector<int> temp(nums.begin() + 0, nums.begin() + nums.size()-1);
            temp.insert(temp.begin(), nums[nums.size()-1]);
            nums = temp;
        }
    }
};