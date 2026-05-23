class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int a = 0;
        while(l < r){
            int temp = 0;
            if(height[l] < height[r]){
                temp = height[l] * (r-l);
                l++;
            }
            else{
                temp = height[r]*(r-l);
                r--;
            }
            if(temp > a){
                a = temp;
            }
        }
        return a;
    }
};