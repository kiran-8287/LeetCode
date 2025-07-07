class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> out;
        for (int i = 0; i < nums.size(); i++) {
            int left = i + 1;
            int right = nums.size() - 1;
            if (i >= 1) {
                if (nums[i] == nums[i - 1]) {
                    continue;
                }
            }
            vector<int> temp;
            while (right > left) {
                if (nums[i] + nums[left] + nums[right] == 0) {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    if (nums[left] == nums[left + 1]) {left++;}
                    if (nums[right] == nums[right - 1]) {right--;}
                    left++;
                    right--;
                    out.push_back(temp);
                    temp.clear();
                } else if (nums[i] + nums[left] + nums[right] < 0) {
                    left++;
                } else if (nums[i] + nums[left] + nums[right] > 0) {
                    right--;
                }
            }
        }
        return out;
    }
};