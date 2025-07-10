class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> out;
        for(int i = 0; i < temperatures.size(); i++){
            int temp = temperatures[i];
            int count = 0;
            bool got = true;
            for(int j = i; j < temperatures.size(); j++){
                if(i != j && temperatures[j] <= temp){
                    if(j != temperatures.size()-1){
                        count++;
                        got = false;
                    }
                }
                else if(i != j && temperatures[j] >= temp){
                    count++;
                    got = true;
                    break;
                }
            }
            if(got == false){count=0;}
            out.push_back(count);
        }
        return out;
    }
};