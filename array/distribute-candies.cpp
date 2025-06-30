class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> map;
        int count = 1;
        int types = 0;
        int out = 0;
        for (int i = 0; i < candyType.size(); i++) {
            if (map[candyType[i]] == 0) {
                map[candyType[i]] = count;
                count++;
                types++;
            }
        }
        int n = candyType.size()/2;
        if(types < n){return types;}
        return n;
    }
};