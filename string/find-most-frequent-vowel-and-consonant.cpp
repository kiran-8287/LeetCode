class Solution {
public:
    int maxFreqSum(string s) {
        char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
        int count = 0;
        int vmax = 0;
        int cmax = 0;
        int max = 0;
        for (int i = 0; i < 5; i++) {
            count = 0;
            for (int j = 0; j < s.length(); j++) {
                if (vowels[i] == s[j]) {
                    count += 1;
                }
            }
            if (vmax < count) {
                vmax = count;
            }
        char consonants[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j',
                                   'k', 'l', 'm', 'n', 'p', 'q', 'r',
                                   's', 't', 'v', 'w', 'x', 'y', 'z'};
        for (int i = 0; i < 21; i++) {
            count = 0;
            for (int j = 0; j < s.length(); j++) {
                if (consonants[i] == s[j]) {
                    count += 1;
                }
            }
            if (cmax < count) {
                cmax = count;
                }
            }
        }
        max = vmax + cmax;
        return max;
    }
};