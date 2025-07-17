#include <climits>
using namespace std;

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int out = INT_MAX;
        for (int i = l; i <= r && i <= nums.size(); i++) {
            int sum = 0;
            for (int j = 0; j < i; j++) {
                sum += nums[j];
            }
            int mini = INT_MAX;
            if (sum > 0) {
                mini = sum;
            }
            int right = i;
            int start = 0;
            while (right < nums.size()) {
                sum = sum - nums[start] + nums[right];
                if (sum > 0) {
                    mini = min(mini, sum);
                }
                right++;
                start++;
            }
            if(mini < out){
                out = mini;
            }
        }

        if (out == INT_MAX) {
            return -1;
        }
        return out;
    }
};
