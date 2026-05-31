class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.length();
        vector<string> words;
        while(i < n){
            while( i < n && s[i] == ' '){
                i++;
            }
            string temp = "";
            while(i < n && s[i] != ' '){
                temp += s[i];
                i++;
            }
            if(temp != ""){
                words.push_back(temp);
            }
        }
        string res = "";
        reverse(words.begin(),words.end());
        for(int i = 0; i < words.size(); i++){
            res += words[i];
            if(i != words.size()-1){
                res += ' ';
            }
        }
        return res;
    }
};