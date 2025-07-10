class Solution {
public:
    void countingsort(vector<int>& arr, int s , long long div) {
        vector<int> count_arr;
        for (int i = 0; i < 10; i++) {
            count_arr.push_back(0);
        }
        vector<int> output_arr(s);
        for(int i = 0; i < s; i++) {
            count_arr[(arr[i]/div)%10]++;
        }
        for (int i = 1; i < 10; i++) {
            count_arr[i] = count_arr[i] + count_arr[i-1];
        }
        for (int i = s-1; i >=0; i--) {
            output_arr[--count_arr[(arr[i]/div)%10]] = arr[i];
        }
        for (int i = 0; i < s; i++) {
            arr[i] = output_arr[i];
        }
    }

    void radixsort(vector<int>& arr, int s) {
        int maxval = arr[0];
        for (int i = 0; i < s; i++) {
            if (arr[i] > maxval) {
                maxval = arr[i];
            }
        }
        for (long long div = 1; maxval/div > 0; div*=10) {
            countingsort(arr,s,div);
        }
    }

    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2){
            return 0;
        }
        radixsort(nums,nums.size());
        int maxval = 0;
        for(int i =0; i < nums.size()-1; i++){
            int temp = nums[i+1] - nums[i];
            if (temp > maxval){
                maxval = temp;
            }
        }
        return maxval;
    }
};