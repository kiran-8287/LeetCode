class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices%2 == 1){
            return {};
        }
        if(cheeseSlices > tomatoSlices){
            return {};
        }
        if(cheeseSlices*2 > tomatoSlices){
            return {};
        }
        int j = (tomatoSlices - 2*cheeseSlices)/2;
        int s = (4*cheeseSlices - tomatoSlices)/2;
        return {j,s};
    }
};