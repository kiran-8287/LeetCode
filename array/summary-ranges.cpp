class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> out;
        int right = 1;
        int left = 0;
        int count = 0;
        int present = 0;
        while(right < nums.size()){
            if(nums[present] +1 == nums[right]){
                count++;
            }
            else{
                if(count == 0){
                    out.push_back(to_string(nums[left]));
                }
                else{
                    out.push_back(to_string(nums[left]) + "->" + to_string(nums[right-1]));
                    count = 0;
                }
                left = right;
            }
            right++;
            present++;
        }
        if(left == right-1){
            out.push_back(to_string(nums[left]));
        }
        else{
            out.push_back(to_string(nums[left]) + "->" + to_string(nums[right-1]));
        }
        return out;
    }
};