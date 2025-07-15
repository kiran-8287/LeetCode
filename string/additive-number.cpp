class Solution {
public:
    bool check(string &num,int i, bool &add){
        if(i == num.length() - 2 ){
            return true;
        }
        if((num[i]-'0') + (num[i+1] - '0') == num[i+2] - '0'){
            add = true;
        }
        if(add == false){return false;}
        return check(num, i+1, add);
    }
    bool isAdditiveNumber(string num) {
        if(num.length() < 3){
            return true;
        }
        bool add = true;
        return check(num, 0 , add);
    }
};