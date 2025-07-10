class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size()+1, 0);
        for(int i = 1; i < nums.size()+1; i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }
        int left = 0;
        int right = 0;
        int min = nums.size()-1;
        bool isfound = false;
        for(int i = 0; i < nums.size(); i++){
            left = prefix[i];
            right = prefix[nums.size()] - prefix[i+1];
            if(left == right){
                if(i <= min){
                    min = i;
                    isfound = true;
                }
            }
        }
        if(isfound == false){return -1;}
        return min;
    }
};