class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
        long long count = 0;
        long long ones = 0;
        long long i = 0;
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