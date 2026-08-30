class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int min_idx = 0;
        int max_idx = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[min_idx])
                min_idx = i;

            if (nums[i] > nums[max_idx])
                max_idx = i;
        }

        int l = min(min_idx, max_idx);
        int r = max(min_idx, max_idx);

        int left = r + 1;
        int right = n - l;             
        int both = l + 1 + n - r;      

        return min({left, right, both});
    }
};