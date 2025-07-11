class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (i != j && nums[i] + nums[j] == target) {
                    solution.push_back(i);
                    solution.push_back(j);
                    return solution;
                }
            }
        }
        return solution;
    }
};