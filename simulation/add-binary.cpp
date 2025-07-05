class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0;
        string out = "";
        int i = a.size()-1;
        int j = b.size()-1;
        while(i >= 0 || j >= 0){
            int temp = 0;
            if(i>=0){
                temp = temp + (a[i] - '0');
                i--;
            }
            if(j>=0){
                temp = temp + (b[j] - '0');
                j--;
            }

            if(c==0){
                if(temp == 2){
                    out += '0';
                    c = 1;
                    continue;
                }
                else if(temp == 1){
                    out += '1';
                    continue;
                }
                else{
                    out+= '0';
                    continue;
                }
            }
            else{
                if(temp == 2){
                    out += '1';
                    continue;
                }
                else if(temp == 1){
                    out += '0';
                    continue;
                }
                else{
                    out+= '1';
                    c = 0;
                    continue;
                }
            }
        }
        reverse(out.begin(), out.end());
        if(c==1){
            out = '1' + out;
        }
        return out;
    }
};