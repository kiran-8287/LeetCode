class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";
        for (int i = 0; i < strs[0].length(); i++) {
            char letter = strs[0][i];
            bool iscommon = true;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != letter) {
                    iscommon = false;
                }
            }
            if (iscommon) {
                common += letter;
            }
            else{
                break;
            }
        }
        return common;
    }
};