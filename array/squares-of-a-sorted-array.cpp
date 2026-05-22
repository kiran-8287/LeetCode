class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int l = 0;
        int r = n-1;
        int curr = n-1;
        while(l <= r){
            int ls = nums[l]*nums[l];
            int rs = nums[r]*nums[r];
            if(ls < rs){
                res[curr] = rs;
                r--;
            }
            else{
                res[curr] = ls;
                l++;
            }
            curr--;
        }
        return res;
    }
};