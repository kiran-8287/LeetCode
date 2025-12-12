class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> rows;
        rows.push_back({1});
        if(rowIndex == 0){
            return rows[0];
        }
        for(int i = 1; i < rowIndex+1; i++){
            vector<int> prev = rows[i-1];
            vector<int> row;
            row.push_back(1);
            for(int j = 1; j < i; j++){
                row.push_back(prev[j-1]+prev[j]);
            }
            row.push_back(1);
            rows.push_back(row);
        }
        return rows.back();
    }
};