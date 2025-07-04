class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0;
        int r = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'L'){l++;}
            else if(s[i] == 'R'){
                r++;
            }
        }
        int count = 0;
        int out = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'R'){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                out++;
            }
        }
        return out;
    }
};