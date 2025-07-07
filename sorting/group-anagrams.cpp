class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        unordered_map<string, int> map;
        for(int i = 0; i < strs.size(); i++){
            vector<string> arr;
            if(strs[i] == ""){
                arr.push_back("");
                out.push_back(arr);
                continue;
                }
            string temp1 = strs[i];
            sort(temp1.begin(), temp1.end());
            for(int j = i; j < strs.size(); j++){
                string temp2 = strs[j];
                sort(temp2.begin(), temp2.end());
                if(temp1 == temp2 && map[strs[j]] == 0){
                    arr.push_back(strs[j]);
                    map[strs[j]] = 1;
                }
            }
            if(arr.empty() == false){out.push_back(arr);}
        }
        sort(out.begin(), out.end());
        return out;
    }
};