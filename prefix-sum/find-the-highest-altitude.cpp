class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> prefix(gain.size()+1, 0);
        for(int i = 1; i < gain.size()+1; i++){
            prefix[i] = prefix[i-1] + gain[i-1];
        }
        int high = prefix[0];
        for(int i = 0 ; i < prefix.size(); i++){
            if(prefix[i] > high){
                high = prefix[i];
            }
        }
        return high;
    }
};