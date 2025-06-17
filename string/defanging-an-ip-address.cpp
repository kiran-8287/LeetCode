class Solution {
public:
    string defangIPaddr(string address) {
        string modified = "";
        for(int i = 0; i < address.length();i++){
            if(address[i]=='.'){modified+="[.]";}
            else{modified+=address[i];}
        }
        return modified;
    }
};