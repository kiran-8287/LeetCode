class Solution {
public:
    bool isCircularSentence(string sentence) {
        int start_idx = 0;
        vector<string> words;
        string word = "";

        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
            } else {
                word += sentence[i];
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }
        if(words[0][0] != words[words.size()-1][words[words.size()-1].size()-1]){
            return false;
        }
        for(int i = 1; i < words.size(); i++){
            if(words[i-1][words[i-1].size()-1] != words[i][0]){
                return false;
            }
        }
        return true;
    }
};