class Solution {
public:
    bool canTransform(string start, string result) {
        if(start.length() < 2){
            return false;
        }
        int l = 0;
        int r = 1;
        while(r < start.length()){
            if(start[l] == 'X' && start[r] == 'L'){
                if(result[l] == 'X'){
                    l++;
                    r++;
                    continue;
                }
                else if(result[l] == 'L' && result[r] == 'X'){
                    l = l + 2;
                    r = r + 2;
                    continue;
                }
                else{
                    l++;
                    r++;
                }
            }
            else if(start[l] == 'R' && start[r] == 'X'){
                if(result[l] == 'R'){
                    l++;
                    r++;
                    continue;
                }
                else if(result[l] == 'X' && result[r] == 'R'){
                    l = l + 2;
                    r = r + 2;
                    continue;
                }
                else{
                    l++;
                    r++;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};