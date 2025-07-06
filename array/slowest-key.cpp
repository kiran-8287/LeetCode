class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        unordered_map<char, int> map;
        vector<char> unq;
        for (int i = 0; i < keysPressed.length(); i++) {
            if (map[keysPressed[i]] == 0) {
                unq.push_back(keysPressed[i]);
            }
        }
        map[keysPressed[0]] = releaseTimes[0];
        for (int i = 1; i < releaseTimes.size(); i++) {
            if (map[keysPressed[i]] == 0) {
                map[keysPressed[i]] = releaseTimes[i] - releaseTimes[i - 1];
            } else {
                map[keysPressed[i]] =
                    map[keysPressed[i]] + releaseTimes[i] - releaseTimes[i - 1];
            }
        }
        int maxValue = map[keysPressed[0]];
        char out = keysPressed[0];

        for (const auto& [ch, val] : map) {
            if (val > maxValue) {
                maxValue = val;
                out = ch;
            }
        }
        return out;
    }
};