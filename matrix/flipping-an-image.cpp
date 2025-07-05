class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++){
            for(int j = 0; j < (image[0].size()+1)/2; j++){
                int temp = image[i][j];
                image[i][j] = !image[i][image[0].size() -1 - j];
                image[i][image[0].size() -1 - j] = !temp;
            }
        }
        return image;
    }
};