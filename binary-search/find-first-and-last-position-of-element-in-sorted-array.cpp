class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        vector<int> temp;
        while(l<=r){
            int m = (l+r)/2;
            if(nums[m] == target){
                temp.push_back(m);
            }
            if(nums[l] == target){
                temp.push_back(l);
            }
            if(nums[r] == target){
                temp.push_back(r);
            }
            r--;
            l++;
        }
        if(temp.size() == 0){
            return {-1,-1};
        }
        if(temp.size() > 2){
            return {temp[0] , temp[1]};
        }
        sort(temp.begin(), temp.end());
        return temp;
    }
};