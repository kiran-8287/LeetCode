class Solution {
public:
    long long minimumSteps(string s) {
        int i = 0;
        int n = s.length();
        long long count = 0;
        for(int j = 0; j < n; j++){
            if(s[j] != '1'){
                s[j] = s[i];
                s[i] = '0';\
                if(i != j){
                    count++;
                }
                i++;  
            }
        }
        return count;
    }
};