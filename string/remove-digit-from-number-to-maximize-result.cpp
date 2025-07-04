class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<int> index;
        for(int i = 0; i < number.length(); i++){
            if(number[i] == digit){
                index.push_back(i);
            }
        }
        string max = "";
        for(int i = 0; i < index.size(); i++){
            string temp = "";
            for(int j = 0; j < number.length(); j++){
                if(j != index[i]){
                    temp += number[j];
                }
            }
            if(temp > max){
                max = temp;
            }
        }
        return max;
    }
};