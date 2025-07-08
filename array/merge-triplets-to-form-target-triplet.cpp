class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        for (int i = 0; i < triplets.size(); i++) {
            for (int j = 0; j < triplets.size(); j++) {
                if (i != j) {
                    triplets[j][0] = max(triplets[i][0], triplets[j][0]);
                    triplets[j][1] = max(triplets[i][1], triplets[j][1]);
                    triplets[j][2] = max(triplets[i][2], triplets[j][2]);
                    if(triplets[j] == target){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};