class Solution {
public:
    int numTrees(int n) {
        if(n==1){
            return 1;
        }
        int num = 1;
        int d1 = 1;
        int d2 = 1;

        for(int i = 1; i < n+1; i++){
            d1 = d1 * i;
        }
        d2 = d1*(n+1);
        num = d2;
        for(int i = n+2; i < 2*n+1; i++){
            num = num*i;
        }
        return num/(d1*d2);
    }
};