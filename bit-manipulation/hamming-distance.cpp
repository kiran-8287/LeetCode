class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<8> a (x);
        bitset<8> b (y);

        string c = a.to_string();
        string d = b.to_string(); 

        int count = 0;
        for(int i = 0 ; i < 8; i++){
            if(c[i] != d[i]){
                count++;
            }
        }
        return count;
    }
};