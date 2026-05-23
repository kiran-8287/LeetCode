class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        int x = nums[0] - temp[0];
        if(x == 0 and nums == temp){
            return true;
        }
        for(int i =0; i < temp.size(); i++){
            if(temp[i] == nums[(i+x+1) % nums.size()]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};