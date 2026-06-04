class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> s;
        for(string log: logs){
            if(log == "./"){
                continue;
            }
            else if(log == "../"){
                if(s.empty() == false){
                    s.pop();
                }
            }
            else{
                s.push(log);
            }
        }
        return s.size();
    }
};