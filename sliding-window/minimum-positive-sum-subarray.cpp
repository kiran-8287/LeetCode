#include <climits>
using namespace std;

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum1 = 0;
        for (int i = 0; i < l; i++) {
            sum1 += nums[i];
        }

        int min1 = INT_MAX;
        if (sum1 > 0) {
            min1 = sum1;
        }
        int right = l;
        int start = 0;
        while (right < nums.size()) {
            sum1 = sum1 - nums[start] + nums[right];
            if (sum1 > 0) {
                min1 = min(min1, sum1);
            }
            right++;
            start++;
        }

        int sum2 = 0;
        int min2 = INT_MAX;
        right = r;
        start = 0;
        for (int i = 0; i < r; i++) {
            sum2 += nums[i];
        }

        if (sum2 > 0) {
            min2 = sum2;
        }
        while (right < nums.size()) {
            sum2 = sum2 - nums[start] + nums[right];
            if (sum2 > 0) {
                min2 = min(min2, sum2);
            }
            right++;
            start++;
        }

        if (min1 == INT_MAX && min2 == INT_MAX) {
            return -1;
        }
        return min(min1, min2);
    }
};
