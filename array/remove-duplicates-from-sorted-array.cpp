class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        int r = 1;
        int c = 0;
        while(r < nums.size()){
            while(nums[l] == nums[r]){
                r++;
            }
            l++;
            nums[l] = nums[r];
            c++;
        }
        return c;
    }
};