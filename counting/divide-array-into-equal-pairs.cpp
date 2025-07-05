class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map[nums[i]] == 0){
                map[nums[i]] = 1;
            }
            else{
                map[nums[i]]++;
            }
        }
        for(const auto& [key, value] : map){
            if(value%2!=0){
                return false;
            }
        }
        return true;
    }
};