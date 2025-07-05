class Solution {
public:
    int findComplement(int num) {
        string binary = "";
        if (num== 0) {binary = "0";}
        while (num > 0) {
            binary = char((num % 2) + '0') + binary;
            num /= 2;
        }
        string temp = "";
        for(int i = 0; i < binary.length(); i++){
            if(binary[i] == '0'){
                temp+= '1';
            }
            else{
                temp+= '0';
            }
        }
        int out = 0;
        for(int i =  temp.length()-1; i >=0; i--){
            if(temp[i] != '0'){
                out = out + pow(2, temp.length()-1-i);
            }
        }
        return out;
    }
};