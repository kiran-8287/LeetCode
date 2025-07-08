class Solution {
public:
    int rob(vector<int>& nums) {
        int odd = 1;
        int even = 0;
        int sum_odd = 0;
        int sum_even = 0;
        while(odd<= nums.size()-1 || even <= nums.size()-1){
            if(odd<= nums.size()-1){sum_odd += nums[odd];
            odd+= 2;}
            if(even <= nums.size()-1){sum_even += nums[even];
            even+= 2;}
        }
        int out = max(sum_even, sum_odd);
        return out;
    }
};