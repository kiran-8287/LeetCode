class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> prefix(nums.size()+1, 0);
        for(int i = 1; i < nums.size()+1; i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }
        int min = prefix[0];
        for(int i = 1; i < prefix.size(); i++){
            if(prefix[i] < min){
                min = prefix[i];
            }
        }
        if(min < 0){
            min = abs(min);
        }
        return min+1;
    }
};