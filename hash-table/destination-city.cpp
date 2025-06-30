class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string s="";
        unordered_map <string,string> map;
        for(int i=0;i<paths.size();i++){
            map[paths[i][0]]=paths[i][1];
        }
        for(int j=0;j<paths.size();j++){
            if(map[paths[j][1]]==""&&map[paths[j][0]]!=""){
                s= paths[j][1];
            }
        }
        return s; 
    }
};