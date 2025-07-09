class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i= 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        
        vector<int> out;
        for (auto& pair : map) {
            if (pair.second == 1) {
                out.push_back(pair.first);
            }
        }
        return out;
    }
};
