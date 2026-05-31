class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
        int count = 0;
        int ones = 0;
        int i = 0;
        while(i < n){
            if(s[i] == '1'){
                ones+=1;
            }
            else{
                count+=ones;
            }
            i++;
        }
        return count;
    }
};