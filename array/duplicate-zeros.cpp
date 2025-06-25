class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        stack<int> dup;
        for(int i=0;i<arr.size();i++){
            dup.push(arr[i]);
            if(arr[i]==0){
                dup.push(0);
            }
        }
        while(dup.size()>arr.size()){
            dup.pop();
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=dup.top();
            dup.pop();
        }
        reverse(arr.begin(),arr.end());
        
    }
};