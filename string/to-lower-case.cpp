class Solution {
public:
    string toLowerCase(string s) {
        for(int i =0; i < s.length(); i++){
            char letter = s[i];
            if(letter >= 'A'&& letter <= 'Z'){
                s[i] = letter + 32;
            }
        }
        return s;
    }
};