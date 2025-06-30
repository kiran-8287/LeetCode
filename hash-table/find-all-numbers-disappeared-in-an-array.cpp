class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> out;
        for(int i = 1; i < nums.size()+1; i++){
            if (find(nums.begin(), nums.end(), i) == nums.end()){
                out.push_back(i);
                }
        }
        return out;
    }
};