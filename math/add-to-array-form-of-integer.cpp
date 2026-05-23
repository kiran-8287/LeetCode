class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = 0;
        vector<int> res;
        for(int i = 0; i < num.size(); i++){
            n = n + num[i]*pow(10,num.size()-1-i);
        }
        int ans = n + k;
        while(ans > 0){
            res.insert(res.begin(),ans%10);
            ans = ans/10;
        }
        return res;
    }
};