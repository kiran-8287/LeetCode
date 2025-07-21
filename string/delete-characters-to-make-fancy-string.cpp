class Solution {
public:
    string makeFancyString(string s) {
        string out = "";
        int i = 0;
        while (i < s.length()) {
            if (i < s.length() - 2 && s[i] == s[i + 1] && s[i] == s[i + 2]) {
                i++;
                continue;
            } else {
                out += s[i];
                i++;
            }
        }
        return out;
    }
};