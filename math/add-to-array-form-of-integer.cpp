class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int carry = 0;
        vector<int> res;
        for(int i = n-1; i >= 0; i--){
            int sum = num[i] + k%10 + carry;
            if(sum > 9){
                carry = 1;
            }
            else{
                carry = 0;
            }
            k = k/10;
            res.insert(res.begin(),sum%10);
            if(i == 0 && carry == 1 && res[0] == 0){
                res.insert(res.begin(),1);
            }
        }
        return res;
    }
};