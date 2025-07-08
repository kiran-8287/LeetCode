class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int l = 0;
        int r = s.length() - 1;
        while(l < s.length()){
            while( l < s.length() && s[l] == ' ' ){
                l++;
            }
            r = l;
            while( r < s.length() && s[r] != ' ' ){
                r++;
            }
            if (l < r) {
                words.push_back(s.substr(l, r - l));
            }
            l = r;
        }
        string out= words[words.size()-1];
        for(int i = words.size()-2; i >= 0; i--){
            out = out + " " + words[i];
        }
        return out;
    }
};