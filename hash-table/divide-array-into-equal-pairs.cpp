class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> unq;
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            if (find(unq.begin(), unq.end(), nums[i]) == unq.end()) {
                for (int j = i; j < nums.size(); j++) {
                    if(nums[i] == nums[j]){
                        count++;
                    }
                }
                if(count%2 != 0){return false;}
                unq.push_back(nums[i]);
            }
        }
        return true;
    }
};