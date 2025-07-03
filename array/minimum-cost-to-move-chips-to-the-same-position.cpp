class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int pos_even = 0;
        int pos_odd = 0;
        for(int i = 0; i < position.size(); i++){
            if(position[i] % 2 == 0){
                pos_even++;
            }
            else{
                pos_odd++;
            }
        }
        if(pos_odd > pos_even){
            return pos_even;
        }
        return pos_odd;
    }
};