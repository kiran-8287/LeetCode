class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        string temp = "";
        for(int i =0; i < s.size(); i++){
            if(s[i] == ' '){
                if(temp == ""){
                    continue;
                }
                break;
            }
            if(s[i]=='-' or s[i]=='+'){
                if(i == 0 or (i > 0 and s[i-1] == ' ')){
                    if(s[i]=='-'){sign = -1;}
                    continue;
                }
                else{
                    break;
                }
            }
            if(!isdigit(s[i]) or s[i]==' '){
                break;
            }
            else{
                temp += s[i];
            }
        }
        if(temp == ""){
            return 0;
        }
        long long x = stoll(temp);
        if(x > INT_MAX){
            return INT_MAX;
        }
        return x*sign;
    }
};