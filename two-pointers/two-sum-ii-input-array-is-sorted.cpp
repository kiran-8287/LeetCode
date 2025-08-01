class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> out;
        int l = 0;
        int r = numbers.size() - 1;
        while(l<r){
            if(numbers[l] + numbers[r] == target ){
                out.push_back(l+1);
                out.push_back(r+1);
                break;
            }
            else if(numbers[l] + numbers[r] < target ){
                l++;
            }
            else if(numbers[l] + numbers[r] > target){
                r--;
            }
        }
        return out;
    }
};