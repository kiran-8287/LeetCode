class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> map;
        string out;
        for(int i = 0; i < paths.size(); i++){
            map[paths[i][0]] = paths[i][1];
            map[paths[i][1]] = "";
        }
        for(int i = 0; i < paths.size(); i++){
            if(map[paths[i][1]] == ""){
                out = paths[i][1];
            }
        }
        return out;
    }
};