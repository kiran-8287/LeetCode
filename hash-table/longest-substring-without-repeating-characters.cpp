class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int out = 0;
        int left = 0;
        int right = 0;
        unordered_map<char, int> map;
        while(right < s.length()){
            if(map[s[right]] == 0){
                map[s[right]] = 1;
                out = max(out, right-left+1);
                right++;
            }
            else{
                while(s[right] != s[left]){
                    map[s[left]] = 0;
                    left++;
                }
                left++;
                out = max(out, right-left+1);
                right++;
            }
        }
        return out;
    }
};