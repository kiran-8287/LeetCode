class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0;
        int r = 0;
        int out = 0;
        unordered_map<char, int> map;
        while(r < s.length()){
            map[s[r]]++;
            while(map[s[r]] > 2){
                map[s[l]] = map[s[l]] - 1;
                l++;
            }
            out = max(out, r-l+1);
            r++;
        }
        return out;
    }
};