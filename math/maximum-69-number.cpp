class Solution {
public:
    int maximum69Number (int num) {
        string digits = to_string(num);
        for (int i = 0; i < digits.length(); i++) {
            if (digits[i] == '6') {
                digits[i] = '9';  
                break;
            }
        }
        return stoi(digits);
    }
};