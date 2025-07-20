class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int i = 1;
        long long arrow = 1;
        int check = points[0][1];
        while(i < points.size()){
            if(check >= points[i][0] && points[i][1] >= check){
                i++;
                continue;
            }
            else{
                check = points[i][1];
                i++;
                arrow++;
            }
        }
        return arrow;
    }
};