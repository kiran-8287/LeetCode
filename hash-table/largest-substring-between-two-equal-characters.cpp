class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> map;
        int max = -1;
        for(int i = 0; i < s.length(); i++){
            int temp = 0;
            if(map[s[i]] == 0){
                map[s[i]] = i+1;
            }
            else{
                temp = i - map[s[i]];;
                if(temp > max){
                    max = temp;
                }
            }
        }
        return max;
    }
};