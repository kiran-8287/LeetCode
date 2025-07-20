class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int i = 1;
        long long arrow = 1;
        int check = points[0][1];
        while(i < points.size()){
            if(check >= points[i][0] &&  check <= points[i][1]){
                i++;
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