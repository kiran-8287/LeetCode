class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < 2*nums.size(); i++){
            if(i<nums.size()){ans.push_back(nums[i]);}
            else if(i >= nums.size() && i < 2*nums.size()){ans.push_back(nums[i-nums.size()]);}
        }
        return ans;
    }
};