class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32> a(start);
        bitset<32> b(goal);

        string s = a.to_string();
        string g = b.to_string();
        int count = 0;
        for(int i =0; i < 32; i++){
            if(s[i] != g[i]){
                count++;
            }
        }
        return count;
    }
};