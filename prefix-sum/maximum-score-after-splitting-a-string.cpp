class Solution {
public:
    int maxScore(string s) {
        vector<int> ones(s.length()+1, 0);
        vector<int> zeros(s.length()+1, 0);

        for(int i = s.length()-1; i >=0; i--){
            if(s[i] == '1'){
                ones[i] = ones[i+1] + 1;
            }
            else{
                ones[i] = ones[i+1];
            }
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0'){
                zeros[i+1] = zeros[i] + 1;
            }
            else{
                zeros[i+1] = zeros[i];
            }
        }
        int out = 0;
        for(int i = 1; i < s.length(); i++){
            int temp = zeros[i]+ones[i];
            if(temp>out){
                out = temp;
            }
        }
        return out;
    }
};