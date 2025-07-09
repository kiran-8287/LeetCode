class Solution {
public:
    int getSum(int a, int b) {
        bitset<32> c (a);
        bitset<32> d (b);

        string x = c.to_string();
        string y = d.to_string();

        int carry = 0;
        string out = "";
        for(int i = x.length()-1; i >= 0; i--){
            int p = x[i] - '0';
            int q = y[i] - '0';
            int temp = p^q;
            if(temp == 0 && (p == 1 && q == 1) ){
                if(carry == 1){
                    out += '1';
                }
                else{
                    out += '0';
                    carry = 1;
                }
            }
            else if (temp == 0 && (p == 0 && q == 0)){
                if(carry == 1){
                    out += '1';
                    carry = 0;
                }
                else{
                    out += '0';
                }
            }
            else if(temp == 1){
                if(carry == 1){
                    out += '0';
                    carry = 1;
                }
                else{
                    out += '1';
                }
            }
        }
        if(carry == 1){
            out+= '1';
        }
        reverse(out.begin(), out.end());
        return stoi(out, nullptr, 2);
    }
};