class Solution {
public:
    int calPoints(vector<string>& operations) {
        int total = 0;
        vector<int> vec;
        int count = 0;
        for(int i = 0; i < operations.size() ; i++){
            if(operations[i] == "+"){
                vec.push_back(vec[count-1]+vec[count-2]);
                count++;
                }
            else if(operations[i] == "D"){
                vec.push_back(vec[count-1]*2);
                count++;
            }   
            else if(operations[i] == "C"){
                vec.pop_back();
                count--;
            }
            else{
                vec.push_back(stoi(operations[i]));
                count++;
            }
        }
        for(int j = 0; j < vec.size(); j++){
            total += vec[j];
        }
        return total;
    }
};