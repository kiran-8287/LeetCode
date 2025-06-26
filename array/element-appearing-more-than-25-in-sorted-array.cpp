class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        stack<int> nums;
        int count = 1;
        int max = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (nums.empty()) {
                nums.push(arr[i]);
            } else {
                if (arr[i] == nums.top()) {
                    count++;
                    if (count > arr.size() / 4) {
                        return arr[i];
                    }
                } else {
                    count = 1;
                }
            }
            nums.push(arr[i]);
        }
        return arr[0];
    }
};