class Solution {
public:
    string largestOddNumber(string num) {
        int n = stoi(num);
        if(n%2==1){
            return num;
        }

        int index = -1;
        for(int i = num.length()-2; i >= 0 ; i--){
            int m = stoi(to_string(num[i]));
            if(m%2 == 1){
                index = i;
                break;
            }
        }
        if(index == -1){
            return "";
        }
        string out = "";
        for(int i = 0; i < index+1; i++){
            out += num[i];
        }
        return out;
    }
};