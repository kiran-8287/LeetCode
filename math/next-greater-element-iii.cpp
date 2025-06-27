class Solution {
public:
    int nextGreaterElement(int n) {
        if (n < 10) {return -1;}
        int m = n;
        vector<int> nums;
        while(n > 0){
            nums.push_back(n%10);
            n = n/10;
        }
        int val = 0;
        reverse(nums.begin(), nums.end());
        int s = nums.size() - 2;
        while(s >= 0 && nums[s] >= nums[s+1]){
            s--;
        }
        if(s<0){return -1;}
        int temp = nums[s];
        nums[s] = nums[s+1];
        nums[s+1] = temp;

        for(int i = 0; i < nums.size(); i++){
            val = val*10 + nums[i];
        }

        if(val>m){return val;}
        return -1;

    }
};