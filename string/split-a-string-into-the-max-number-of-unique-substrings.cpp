class Solution {
public:
    int maxUniqueSplit(string s) {
        int count = 0;
        unordered_map< string, int > map;
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            temp+= s[i];
            if(map[temp] == 0){
                map[temp] = 1;
                count++;
                temp = "";
            }
        }
        return count;
    }
};