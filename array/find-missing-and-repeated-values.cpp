class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<bool> freq(grid.size()*grid.size()+1,false);
        vector<int> result;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(freq[grid[i][j]] == false){
                    freq[grid[i][j]] = true;
                }
                else if(freq[grid[i][j]] == true){
                    result.push_back(grid[i][j]);
                }
            }
        }
        for(int i = 1; i < grid.size()*grid.size()+1;i++){
            if(freq[i] == false){
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};