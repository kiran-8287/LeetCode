class Solution {
public:
    int numTrees(int n) {
        if(n==1){
            return 1;
        }
        long long num = 1;
        long long d1 = 1;

        for(int i = 1; i < n+1; i++){
            d1 = d1 * i;
        }
        for(int i = 2*n; i > n+1; i--){
            num = num*i;
        }
        return num/d1;
    }
};