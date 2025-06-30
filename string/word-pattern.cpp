class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                word+= s[i];
            }
            else{
                words.push_back(word);
                word = "";
            }
        }
        words.push_back(word);

        unordered_map<char, string> ps;
        unordered_map<string, char> sp;
        for(int i = 0; i < pattern.size(); i++){
            if(ps[pattern[i]] != "" && ps[pattern[i]] != words[i]){return false;}
            if(sp[words[i]] != 0 && sp[words[i]] != pattern[i]){return false;}
            ps[pattern[i]] = words[i];
            sp[words[i]] = pattern[i];
        }
        return true;
    }
};