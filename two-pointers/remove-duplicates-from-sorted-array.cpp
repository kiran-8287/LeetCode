class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int c = 0;
        while(r < nums.size()){
            c++;
            while(r < nums.size() && nums[l] == nums[r]){
                r++;
            }
            if(r < nums.size()){
                l++;
                nums[l] = nums[r];
            }
        }
        return c;
    }
};