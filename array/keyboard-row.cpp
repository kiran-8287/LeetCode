class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> out;
        string one = "qwertyuiop";
        string two = "asdfghjkl";
        string three = "zxcvbnm";
        for(int i = 0; i < words.size(); i++){
            int num = 0;
            bool changed = false;
            for(int j = 0; j < words[i].length(); j++){
                if(one.find(tolower(words[i][j])) != string::npos){
                    if(num == 0 || num == 1){
                        num = 1;
                    }
                    else{
                        changed = true;
                        break;
                    }
                }
                else if(two.find(tolower(words[i][j])) != string::npos){
                    if(num == 0 || num == 2){
                        num = 2;
                    }
                    else{
                        changed = true;
                        break;
                    }
                }
                else if(three.find(tolower(words[i][j])) != string::npos){
                    if(num == 0 || num == 3){
                        num = 3;
                    }
                    else{
                        changed = true;
                        break;
                    }
                }
            }
            if(changed == false){
                out.push_back(words[i]);
            }
        }
        return out;
    }
};