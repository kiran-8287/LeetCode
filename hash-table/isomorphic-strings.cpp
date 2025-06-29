class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){return false;}
        unordered_map<char , char> st;
        for(int i = 0; i < s.length(); i++){
            if(st[s[i]] != 0 && st[s[i]] != t[i]){
                return false;
            }
            st[s[i]] = t[i];
        }
        return true;
    }
};