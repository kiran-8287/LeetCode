class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
        int right = 0;
        unordered_map<int, int> map;
        long long out = 0;
        long long count = 0;
        while (right < nums.size()) {
            if (map[nums[right]] == 0) {
                map[nums[right]]++;
                count = count + nums[right];
                out = max(out, count);
            } else {
                while (map[nums[right]] > 0) {
                    map[nums[left]]--;
                    count = count - nums[left];
                    left++;
                }
                map[nums[right]]++;
                count += nums[right];
                out = max(out, count);
            }
            right++;
        }
        return out;
    }
};