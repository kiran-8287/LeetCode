class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                count++;
            }
            else{
                count--;
            }
        }
        return abs(count);
    }
};