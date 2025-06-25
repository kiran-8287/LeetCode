class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int width = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if((width + widths[s[i]-97]) <= 100){
                width = width + widths[s[i]-97];
            }
            else{
                count += 1;
                width = 0;
                width += widths[s[i]-97];
            }
        }
        if(width != 0){count +=1;}
        vector<int> out = {count, width};
        return out;        
    }
};