class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, bool> map;
        vector<int> out;

        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = true;
        }

        for (int i = 1; i < nums.size()+1; i++) {
            if (map[i] == false) {
                out.push_back(i);
            }
        }

        return out;
    }
};