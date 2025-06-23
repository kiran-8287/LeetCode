class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int y1 = points[0][1] - points[1][1];
        int x1 = points[0][0] - points[1][0];
        int y2 = points[0][1] - points[2][1];
        int x2 = points[0][0] - points[2][0];
        if(y1*x2 - y2*x1 != 0){return true;}
        return false;
    }
};