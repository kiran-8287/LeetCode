class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(N==0){
            return 1;
        }
        else if(N < 0){
            x = 1.0/x;
            N = -N;
        }
        double half = myPow(x,N/2);
        if(N%2==0){
            return half*half;
        }
        return x*half*half;
    }
};