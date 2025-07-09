class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int s = strs.size();
        bool swapped = true;
        while (swapped) {
            swapped = false;
            for (int i = 0; i < strs.size() - 1; i++) {
                if (strs[i].size() > strs[i + 1].size()) {
                    string temp = strs[i];
                    strs[i] = strs[i + 1];
                    strs[i + 1] = temp;
                    swapped = true;
                }
            }
            s--;
        }
        int zeros = 0;
        int ones = 0;
        int out = 0;
        for(int i = 0; i < strs.size() - 1; i++){
            bool isgood = true;
            for(int j = 0; j < strs[i].size(); j++){
                if(strs[i][j] == '0'){
                    if(zeros+1 > m){
                        isgood = false;
                        break;
                    }
                    zeros++;
                }
                else if(strs[i][j] == '1'){
                    if(ones+1 > m){
                        isgood = false;
                        break;
                    }
                    ones++;
                }
            }
            if(isgood == true){
                out++;
            }
            if(zeros == m && ones == n){
                break; 
            }
        }
        return out;
    }
};