class Solution {
public:
    string convertToTitle(int columnNumber) {
        string out = "";
        while(columnNumber > 0){
            columnNumber = columnNumber -1;
            out = char('A' + columnNumber%26) + out;
            columnNumber = columnNumber/26;
        }
        return out;
    }
};