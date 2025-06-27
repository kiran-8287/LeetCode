class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int initial = 0;
        int min = nums[0];
        for(int i = 0; i < n; i++){
            initial += nums[i];
            if(nums[i] < min){min = nums[i];}
        }
        return initial - n*min;
    }
};