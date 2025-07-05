class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> out(encoded.size()+1, 0);
        out[0] = first;
        for(int i = 0; i < encoded.size(); i++){
            out[i+1] = out[i]^encoded[i];
        }
        return out;
    }
};