class Solution {
public:
    bool check(vector<int>& nums) {
        int s = nums.size();
        int k = 0;
        vector<int> dub = nums;
        sort(dub.begin(), dub.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == dub[0]){
                k =i;
            }
        }
        vector<int> out;
        while(out.size() < s ){
            if(k>s-1){
                k = 0;
            }
            out.push_back(nums[k]);
            k++;
        }
        if(out == dub){return true;}
        return false;
    }
};