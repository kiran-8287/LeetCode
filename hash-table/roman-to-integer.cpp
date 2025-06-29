class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char ,int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        int num = 0;
        for(int i = 0; i < s.length()-1; i++){
            if(num == 0){
                num+= roman[s[i]];
            }
            else{
                if(roman[s[i]] < roman[s[i+1]]){
                    num =  num - roman[s[i]];
                }
                else{
                    num+= roman[s[i]];
                }
            }
        }
        num+= roman[s[s.length()-1]];
        return num;
    }
};