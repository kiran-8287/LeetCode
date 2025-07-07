class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> out;
        int l = 0;
        int r = numbers.size() - 1;
        while(l<r){
            if(numbers[l] + numbers[r] == target ){
                out.push_back(l);
                out.push_back(r);
                break;
            }
            else if(numbers[l] + numbers[r] < target ){
                l++;
            }
            else if(numbers[l] + numbers[r] > target){
                r++;
            }
        }
        return out;
    }
};