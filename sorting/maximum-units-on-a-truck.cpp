class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] > b[1];
             });
        int total = 0;
        int count = 0;
        for(int i = 0; i < boxTypes.size(); i++){
            if(truckSize - count >= boxTypes[i][0]){
                count += boxTypes[i][0];
                total += boxTypes[i][0] * boxTypes[i][1]; 
            }
            else{
                total += (truckSize - count) * boxTypes[i][1];
                break;
            }
        }
        return total;
    }
};