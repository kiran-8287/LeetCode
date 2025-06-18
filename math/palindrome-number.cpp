class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> y;
        if (x < 0) {
            return false;
        }
        while(x>0){
            y.push_back(x%10);
            x = x/10;
        }
        vector<int> z = y;
        for (int i = 0; i < y.size() / 2; i++) {
            y[i] = y[y.size() - i - 1];
        }

        if (y == z) {
            return true;
        } else {
            return false;
        }
    }
};