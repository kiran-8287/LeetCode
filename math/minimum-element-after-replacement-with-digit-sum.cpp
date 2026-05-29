class Solution {
public:
    int minElement(vector<int>& nums) {
        int curr = INT_MAX;
        for(int i =0; i<nums.size(); i++){
            int temp = 0;
            while(nums[i] > 0){
                temp = temp + nums[i]%10;
                nums[i] = nums[i]/10;
            }
            if(temp < curr){
                curr = temp;
            }
        }
        return curr;
    }
};