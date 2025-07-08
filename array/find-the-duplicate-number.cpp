class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        int out = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(map[nums[i]] == 0){
                map[nums[i]] = 1;
            }
            else{
                out = nums[i];
            }
        }
        return out;
    }
};