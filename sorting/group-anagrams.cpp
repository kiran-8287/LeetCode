class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> map;

        for(string s: strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            if(map.find(temp) != map.end()){
                map[temp].push_back(s);
            }
            else{
                map[temp] = {s};
            }
        }

        for(auto x: map){
            res.push_back(x.second);
        }
        return res;
    }
};