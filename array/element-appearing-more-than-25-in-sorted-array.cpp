class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double s = (25.00 /100.00) * arr.size();
        for(int i = 0; i < arr.size() - 1; i++){
            int count = 1;
            for(int j = i+1; j < arr.size() ; j++){
                if(arr[i] == arr[j]){
                    count++;
                    if(count > s){
                        return arr[i];
                    }
                }
            }
        }
        return -1;

    }
};