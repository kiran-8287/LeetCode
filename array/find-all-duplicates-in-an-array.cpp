class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> out;
        for(int i = 0; i < nums.size(); i++){
            int k = abs(nums[i]) - 1;
            if(nums[k] < 0){
                out.push_back(abs(nums[i]));
            }
            else{
                nums[k] = -nums[k];
            }
        }
        return out;
    }
};