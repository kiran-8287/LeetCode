class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]==' '){
                count += 1;
            }
        }
        return count +1;
    }
};