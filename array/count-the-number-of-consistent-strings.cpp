class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> temp;
        for(int i = 0 ;i < allowed.length(); i++){
            temp[allowed[i]]=1;
        }
        
        int out=0;
        for(int j =0 ;j < words.size(); j++){
            int count=0;
            for(int i =0 ;i < words[j].length() ; i++){
                if(temp[words[j][i]] != 0){
                    count++;
                }
            }
            if(count==words[j].length()){
                out++;
            }
        }
        return out;
    }
};