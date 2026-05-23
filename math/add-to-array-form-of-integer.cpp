class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        long long temp = 0;
        int n = num.size();
        for(int i =0; i < n; i++){
            temp += (long long)pow(10,n-i-1)*num[i];
        }
        int res = temp+k;
        vector<int> ans;
        while(res > 0){
            ans.insert(ans.begin(),res%10);
            res = res/10;
        }
        return ans;
    }
};