class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = INT_MIN;
        for(int i=height.size()-1; i >= 1; i--){
            for(int j = i-1; j >= 0; j--){
                if((abs(i-j)*min(height[i],height[j])) > max_area){
                    max_area = abs(i-j)*min(height[i],height[j]);
                }
            }
        }
        return max_area;
    }
};