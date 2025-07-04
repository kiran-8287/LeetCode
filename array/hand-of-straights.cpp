class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize != 0){return false;}
        sort(hand.begin(), hand.end());
        for(int i = 0; i < hand.size(); i++ ){
            
        }

        return true;
    }
};