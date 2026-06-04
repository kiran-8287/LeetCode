class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0;
        int r = 0;
        while(l < s.length() && r < t.length()){
            while(r < t.length() && s[l] != t[r]){
                r++;
            }
            if(r >=t.length()){
                return false;
            }
            l++;
        }
        if(l >= s.length()){
            return true;
        }
        return false;
    }
};