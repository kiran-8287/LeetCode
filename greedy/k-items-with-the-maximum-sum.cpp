class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int count = 0;
        int total = 0;
        if(numOnes <= k){
            count += numOnes;
            total += numOnes;
        }
        else{
            count+= k;
            total += k;
        }
        
        if(count < k){
            if((count + numZeros) <= k){
                count+= numZeros;
            }
            else{
                count = k;
            }
        }

        if(count < k){
            if((count+numNegOnes) <= k){
                count += numNegOnes;
                total = total - numNegOnes;
            }
            else{
                count = k;
                total = total - (k - count);
            }
        }
        return total;
    }
};