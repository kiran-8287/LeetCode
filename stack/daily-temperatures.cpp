class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> indexes;
        vector<int> out(temperatures.size(), 0);
        for(int i = 0; i < temperatures.size(); i++){
            while(indexes.empty()==false && temperatures[i] > temperatures[indexes.top()]){
                int temp = indexes.top();
                indexes.pop();
                out[temp] = i - temp;
            }
            indexes.push(i);
        }
        return out;
    }
};