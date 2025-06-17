class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                word += tolower(s[i]);
            }
        }
        int l = 0;
        while(l < word.length()){
            if(word[l] != word[word.length()-l-1]){
                return false;
            }
            l++;
        }
        return true;
    }
};