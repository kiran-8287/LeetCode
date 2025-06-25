class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> out;
        if(n%2 == 1){out.push_back(0);}
        int i = 1;
        while (out.size() < n){
            out.push_back(-i);
            out.push_back(+i);
            i++;
        }
        return out;
    }
};