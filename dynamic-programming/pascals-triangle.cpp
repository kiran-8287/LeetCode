class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> out;
        out.push_back({1});
        if(numRows == 1){
            return out;
        }
        for(int i = 1; i < numRows; i++){
            vector<int> prev = out[i-1];
            vector<int> row;
            row.push_back(1);
            for(int j = 1; j < i; j++){
                row.push_back(prev[j-1] + prev[j]);
            }
            row.push_back(1);
            out.push_back(row);
        }
        return out;
    }
};