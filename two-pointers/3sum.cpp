class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> out;
        for (int i = 0; i < nums.size(); i++) {
            if (i >= 1) {
                if (nums[i] == nums[i - 1]) {
                    continue;
                }
            }
            while (left < right && nums[left] == nums[left + 1]) left++;
            while (left < right && nums[right] == nums[right - 1]) right--;
            int left = i + 1;
            int right = nums.size() - 1;
            vector<int> temp;
            while (right > left) {
                if (nums[i] + nums[left] + nums[right] == 0) {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    left++;
                    right--;
                    sort(temp.begin(), temp.end());
                    if (find(out.begin(), out.end(), temp) == out.end()) {
                        out.push_back(temp);
                    }
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