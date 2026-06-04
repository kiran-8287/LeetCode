class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> map;
        for(int i = 0; i < list1.size(); i++){
            map[list1[i]] = -1;
        }
        int res = INT_MAX;
        vector<string> out;
        for(int i = 0; i < list2.size(); i++){
            if(map.find(list2[i]) != map.end()){
                auto it = find(list1.begin(), list1.end(), list2[i]);
                int j = it - list1.begin();
                if(res >= i + j){
                    res = i + j;
                    map[list2[i]] = i + j;
                }
            }
            else{
                map[list2[i]] = -1;
            }
        }
        for(auto& p: map){
            if(p.second == res){
                out.push_back(p.first);
            }
        }
        return out;
    }
};