class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int res = 0;
        string current = "";
        int maxi = 0;
        for(char c: s){
            if(map.find(c) == map.end()){
                current += c;
                res += 1;
                maxi = max(res,maxi);
                map[c] = 1;
            }
            else{
                while(map[c] == 1){
                    map[current[0]] = 0;
                    current.erase(0,1);
                    res-=1;
                }
                map[c] = 1;
                res+=1;
                maxi = max(res,maxi);
                current += c;
            }
        }
        return maxi;
    }
};