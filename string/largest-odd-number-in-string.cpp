class Solution {
public:
    string largestOddNumber(string num) {
        string s="";
        int x=-1;
        
        for(int i=num.length()-1;i>=0;i--){
            if((num[i]-'0')%2==1){
                x=i;
                break;
            }
        }
        if(x!=-1){
        for(int j=0;j<=x;j++){
            s+=num[j];
        }
        }
        else{s="";}
        return s;
    }
};