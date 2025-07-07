class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> out;
        for(int i=0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            map[temp].push_back(strs[i]);
        }
        for(const auto& [word, arr] : map){
            out.push_back(arr);
        }
        sort(out.begin(), out.end());
        return out;
    }
};