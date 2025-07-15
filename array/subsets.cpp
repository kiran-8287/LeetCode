class Solution {
public:
    void getsubset(vector<int>& nums, vector<int> ans, int i, vector<vector<int>>& out ){
        if(i==nums.size()){
            out.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        getsubset(nums, ans, i+1, out);

        ans.pop_back();
        getsubset(nums, ans, i+1, out);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> out;
        getsubset(nums, ans, 0, out);
        return out;
    }
};