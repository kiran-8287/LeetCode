class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> pos;

        for (int i = 0; i < list1.size(); i++) {
            pos[list1[i]] = i;
        }

        int best = INT_MAX;
        vector<string> ans;

        for (int i = 0; i < list2.size(); i++) {
            auto it = pos.find(list2[i]);

            if (it != pos.end()) {
                int sum = i + it->second;

                if (sum < best) {
                    best = sum;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if (sum == best) {
                    ans.push_back(list2[i]);
                }
            }
        }

        return ans;
    }
};