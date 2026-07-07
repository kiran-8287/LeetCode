class Solution {
public:
    long long sumAndMultiply(int n) {
        string temp = to_string(n);
        long long num = 0;
        long long sum = 0;
        for(char c: temp){
            if(c-'0' != 0){
                sum += c-'0';
                num = num*10+(c-'0');
            }
        }
        return num*sum;
    }
};