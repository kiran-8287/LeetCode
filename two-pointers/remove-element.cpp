class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0;
        int r = 0;
        while(r < nums.size()){
            while(r < nums.size() && nums[r] == val){
                r++;
            }
            if(nums[l] != val){
                r++;
                l++;
            }

            else if(r < nums.size() && nums[l] == val){
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
                l++;
            }
            
        }
        return l;
    }
};