class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max = abs(nums[0] - nums[nums.size() - 1]);
        int i = 0;
        while (i < nums.size() - 1) {
            int diff = 0;
            diff = abs(nums[i] - nums[i + 1]);
            if (diff > max) {
                max = diff;
            }
            i++;
        }
        return max;
    }
};