class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        bool signSeen = false;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                if (temp == "" && signSeen==false){
                    continue;
                }
                break;
            }
            if(s[i] == '-' || s[i] == '+') {
                if(i > 0 and s[i-1] !=' '){
                    break;
                }
                if (signSeen==false && temp == "") {
                    signSeen = true;
                    if (s[i] == '-'){
                        sign = -1;
                    }
                    continue;
                } 
                else{
                    break;
                }
            }
            if (isdigit(s[i])==false){
                break;
            }
            temp += s[i];
        }
        if (temp == ""){
            return 0;
        }
        if(temp.size() > 10){
            if(sign == -1){
                return INT_MIN;
            }
            return INT_MAX;
        }
        long long x = stoll(temp)*sign;
        if (x > INT_MAX){
            return INT_MAX;
        }
        if (x < INT_MIN){
            return INT_MIN;
        }
        return (int)x;
    }
};
