class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        int k = 0;

        while(temp[k] != nums[0]){
            k++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(temp[(i+k)%nums.size()] != nums[i]){
                return false;
            }
        }

        return true;
    }
};