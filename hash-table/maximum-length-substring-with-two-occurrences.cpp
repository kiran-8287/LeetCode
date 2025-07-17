class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0;
        int r = 0;
        int out = 0;
        int count = 0;
        unordered_map<char, int> map;
        while(r < s.length()){
            if(map[s[r]] == 0 || map[s[r]] == 1 ){
                map[s[r]] += 1;
                count++;
                r++;
            }
            else{
                while(map[s[r]] >= 2){
                    map[s[l]] = map[s[l]] - 1;
                    count--;
                    l++;
                }
                r++;
            }
            out = max(out, count);
        }
        return out;
    }
};