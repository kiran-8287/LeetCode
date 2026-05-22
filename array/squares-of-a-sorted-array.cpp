class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < res.size(); i++){
            res.append(nums[i]*nums[i]);
        }
        res.sort();
        return res;
    }
};