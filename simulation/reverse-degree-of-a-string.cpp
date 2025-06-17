class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0;
        string alfa = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < s.length(); i++) {
            degree+=(26-(alfa.find(s[i])))*(i + 1);
        }
        return degree;
    }
};