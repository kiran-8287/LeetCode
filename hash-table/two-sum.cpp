class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map[nums[i]] == 0){
                map[nums[i]] = i;
            }
            else if(map.find(target-nums[i]))){
                res.push_back(i);
                res.push_back(map[target-nums[i]]);
                return res;
            }
        }
        return res;
    }
};