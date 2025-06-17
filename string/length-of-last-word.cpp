class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;
        int count = 0;
        for( i ; i>=0 && s[i] == ' ' ; i--){

        }
        for(i ; i>=0 && s[i] != ' '; i--){
            count++;
        }
        return count;
    }
};