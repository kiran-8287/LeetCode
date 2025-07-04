class Solution {
public:
    int minimumMoves(string s) {
        int cost = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'X'){
                if(i == s.length()-2){
                i = i + 1;
                cost++;
                }
                else if(i == s.length()-1){
                    cost++;
                }
                else{
                    i = i+2;
                    cost++;
                }
            }
        }
        return cost;
    }
};