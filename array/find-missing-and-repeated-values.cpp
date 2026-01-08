class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,bool> map;
        vector<int> result;
        for(int i = 1; i < grid.size()*grid.size()+1;i++){
            map[i] = false;
        }
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(map[grid[i][j]] == false){
                    map[grid[i][j]] = true;
                }
                else if(map[grid[i][j]] == true){
                    result.push_back(grid[i][j]);
                }
            }
        }
        for(int i = 1; i < grid.size()*grid.size()+1;i++){
            if(map[i] == false){
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};