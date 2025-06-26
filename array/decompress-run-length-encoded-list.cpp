class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i = 0;
        vector<int> out;
        while (i < nums.size()) {
            int freq = nums[i];
            int val = nums[i + 1];
            for (int j = 0; j < freq; j++) {
                out.push_back(nums[i+1]);
            }
            i += 2;
        }
        return out;
    }
};