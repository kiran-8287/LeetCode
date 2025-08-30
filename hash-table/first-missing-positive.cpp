class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int smallest = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == smallest){
                smallest += 1;
            }
        }
        return smallest;
    }
};