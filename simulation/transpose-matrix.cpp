class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int coloumns = matrix[0].size();
        int n = rows;
        int m = coloumns;
        vector<vector<int>> output(m , vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                output[j][i]=matrix[i][j];
            }
        }
        return output;
    }
};