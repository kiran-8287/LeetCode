class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string> words;
        string word = "";

        for (int i = 0; i < sentence.length(); i++) {
            if (sentence[i] == ' ') {
                if (word != "") {
                    words.push_back(word);
                    word = "";
                }
            } else {
                word += sentence[i];
            }
        }
        if (word != "") {
            words.push_back(word);
        }

        for(int i = 0; i < words.size(); i++){
            string as(i+1, 'a');
            if(words[i][0] == 'a'||words[i][0] == 'e'||words[i][0] == 'i'||words[i][0] == 'o'||words[i][0] == 'u'){
                words[i] += "ma" + as;
            }
            else{
                words[i] = words[i].substr(1,words[i].length()-1) + words[i][0] + "ma" + as;
            }
        }
        string output = "";
        for(int i =0; i < words.size()-1;i++){
            output+= words[i] + ' ';
        }
        output+=words[words.size()-1];
        return output;
    }
};