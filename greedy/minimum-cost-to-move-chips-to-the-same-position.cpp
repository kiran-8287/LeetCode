class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int max_count = 0;
        int best_pos = position[0];
        int cost = 0;
        for(int i = 0; i < position.size(); i++){
            int count = 0;
            for(int j = i; j < position.size(); j++){
                if(position[i] == position[j]){
                    count++;
                }
            }
            if(count>max_count){
                max_count = count;
                best_pos = position[i];
            }
        }
        for(int i =0; i < position.size(); i++){
            if(position[i] != best_pos){
                if(abs(position[i] - best_pos)%2 == 1){
                    cost++;
                }
            }
        }
        return cost;
    }
};