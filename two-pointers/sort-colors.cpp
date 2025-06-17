class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 3;
        int count_arr[r];
        int s = nums.size();
        for (int i = 0; i < r; i++) {
            count_arr[i] = 0;
        }
        int output_arr[s];
        for(int i = 0; i < s; i++) {
            ++count_arr[nums[i]];
        }
        for (int i = 1; i < r; i++) {
            count_arr[i] = count_arr[i] + count_arr[i-1];
        }
        for (int i = 0; i < s; i++) {
            output_arr[--count_arr[nums[i]]] = nums[i];
        }
        for(int i = 0; i < s; i++){
            nums[i] = output_arr[i];
        }
    }
};