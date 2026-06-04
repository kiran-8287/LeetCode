class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int curr = 0;
        while(i < n){
            int j = i;
            while(j < n && chars[i] == chars[j]){
                j++;
            }
            int count = j-i;
            chars[curr] = chars[i];
            curr++;
            if(count > 1){
                string temp = to_string(count);
                for(char num: temp){
                    chars[curr] = num;
                    curr++;
                }
            }
            i = j;
        }
        return curr;
    }
};