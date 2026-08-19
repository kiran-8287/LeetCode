class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> post(nums.size(),1);
        vector<int> pre(nums.size(),1);
        
        for(int i = 1; i < nums.size(); i++){
            post[i] = post[i-1]*nums[i-1];
        }
        for(int i = nums.size()-2;i>=0; i--){
            pre[i] = pre[i+1]*nums[i+1];
        }
        vector<int> res(nums.size(),1);
        for(int i = 0; i < nums.size(); i++){
            res[i] = pre[i]*post[i];
        }
        return res;
    }
};