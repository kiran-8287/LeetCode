class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices%2 == 1){
            return {};
        }
        int j = (tomatoSlices - 2*cheeseSlices)/2;
        int s = (4*cheeseSlices - tomatoSlices)/2;
        if(j < 0 || s < 0){
            return {};
        }
        return {j,s};
    }
};