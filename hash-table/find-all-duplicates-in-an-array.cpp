class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> out;
        for(int i = 0; i < nums.size(); i ++){
            if(map[nums[i]] == 0){
                map[nums[i]] = 1;
            }
            else{
                out.push_back(nums[i]);
            }
        }
        return out;
    }
};