class Solution {
public:
    int nextGreaterElement(int n) {
        int temp = n;
        vector<int> nums;
        while(n > 0){
            nums.push_back(n%10);
            n = n/10;
        }
        int val = 0;
        sort(nums.begin(), nums.end());
        for(int i = nums.size()-1; i >= 0; i--){
            val= val*10 + nums[i]; 
        }
        if(val > temp){return val;}
        return -1;
    }
};