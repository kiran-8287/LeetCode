class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int l = i + 1;
            int r = nums.size() - 1;
            if (i >= 1) {
                if(nums[i] == nums[i - 1]) {
                    continue;
                }
            }

            while (l < r) {

                int s = nums[i] + nums[l] + nums[r];
                if (s == 0) {
                    out.push_back({nums[i], nums[l], nums[r]});
                    while(l < r && nums[l] == nums[l+1]){
                        l++;
                    }
                    while(l < r && nums[r] == nums[r-1]){
                        r--;
                    }
                    l++;
                    r--;
                }
                else if(s < 0){
                    l++;
                }
                else{
                    r++;
                }
            }
        }
        return out;
    }
};