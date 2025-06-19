class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int eve=0;
        int odd = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]%2 == 0){
                eve++;
            }
            else{
                odd++;
            }
        }
        for(int i = 0; i < eve; i++){
            nums[i] = 0;
        }
        for(int i = eve; i < eve + odd; i++){
            nums[i] = 1;
        }
        return nums;
    }
};