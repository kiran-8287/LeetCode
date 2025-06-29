class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){return false;}
        unordered_map<char , char> st;
        unordered_map<char , char> ts;

        for(int i = 0; i < s.length(); i++){
            if(st[s[i]] != 0 && st[s[i]] != t[i]){
                return false;
            }
            if(ts[t[i]] != 0 && ts[t[i]] != s[i]){
                return false;
            }
            st[s[i]] = t[i];
            ts[t[i]] = s[i];
        }
        return true;
    }
};