class Solution {
public:
    vector<vector<int>> pairs(string n) {
        vector<vector<int>> freq;
        int left = 0;
        int right = 0;

        while (right < n.length()) {
            if (n[right] == n[left]) {
                right++;
            } else {
                freq.push_back({n[left] - '0', right - left});
                left = right;
            }
        }

        freq.push_back({n[left] - '0', right - left});
        return freq;
    }

    string helper(vector<vector<int>> freq) {
        string out = "";
        for (int i = 0; i < freq.size(); i++) {
            out += to_string(freq[i][1]) + to_string(freq[i][0]);
        }
        return out;
    }

    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        string next = countAndSay(n - 1);
        return helper(pairs(next));
    }
};
