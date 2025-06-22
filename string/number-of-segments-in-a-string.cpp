class Solution {
public:
    int countSegments(string s) {
        if(s.empty()){return 0;}
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ' && (isalpha(s[i-1]) || isalpha(s[i+1]))){
                count += 1;
            }
        }
        return count +1;
    }
};