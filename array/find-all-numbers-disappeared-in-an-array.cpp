class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> out;
        unordered_map<int , int> map;
        int count = 1;
        for(int i = 0; i < n; i++){
            if(map[nums[i]] == 0){
                map[nums[i]] = count;
                count += 1;}
        }
        for(int i = 1; i < n+1; i++){
            if(map[i] == 0){
                out.push_back(i);
            }
        }
        return out;
    }
};