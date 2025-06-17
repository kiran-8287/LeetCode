class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> running ;
        for (int i = 0; i < nums.size();i++){
            sum += nums[i];
            running.push_back(sum);
        }
        return running;
    }
};