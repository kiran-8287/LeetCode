class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max = -1;
        for (int j = 0; j < nums.size() - 1; j++) {
            for (int i = j + 1; i < nums.size(); i++) {
                if (nums[i] - nums[j] > max && nums[i] != nums[j]) {
                    max = nums[i] - nums[j];
                }
            }
        }
        return max;
    }
};