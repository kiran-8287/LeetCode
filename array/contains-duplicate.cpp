class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> b;
        for(int i=0;i<nums.size();i++){
            if(b[nums[i]] == true){
               return true;
            }
            b[nums[i]] = true;
        }
        return false;;
    }
};