class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        vector<bool> isprime(n, true);
        isprime[0] = false;
        isprime[1] = false;
        for(int i = 2; i*i < n; i++){
            if(isprime[i] == true){
                for(long long p = (long long)i*(long long)i; p < n; p = p+i){
                    isprime[p] = false;
                }
            }
        }
        int out = 0;
        for(int i = 0; i < isprime.size(); i++){
            if(isprime[i] == true){
                out++;
            }
        }
        return out;
    }
};