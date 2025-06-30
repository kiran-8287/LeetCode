class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> b;
        for(int i=0;i<nums.size();i++){
            if(b[nums[i]]){
               return true;
               break; 
            }
            b[nums[i]]=true;

        }
        return false;;
    }
};
