class Solution {
public:
    int minSwaps(string s) {
        if(s == ""){
            return 0;
        }
        int count = 0;
        int m = INT_MIN;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ']'){
                count++;
            }
            else{
                count--;
            }
            m = max(m,count);
        }
        return (m+1)/2;
    }
};