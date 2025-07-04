class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       if(hand.size()%groupSize != 0){return false;}
       return true;
    }
};