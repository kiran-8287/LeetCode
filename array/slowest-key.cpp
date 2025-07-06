class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max = releaseTimes[0];
        char out = keysPressed[0];

        for (int i = 1; i < releaseTimes.size(); i++) {
            int temp = releaseTimes[i] - releaseTimes[i - 1];
            if (temp > max || (temp == max && keysPressed[i] > out)) {
                max = temp;
                out = keysPressed[i];
            }
        }
        return out;
    }
};
