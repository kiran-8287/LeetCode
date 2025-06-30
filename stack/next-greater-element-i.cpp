class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> out(nums1.size());
        for(int i = 0; i < nums1.size(); i++){
            out[i] = -1; 
        }
        for(int i = 0; i < nums1.size(); i++){
            int j = 0;
            while(nums1[i] != nums2[j]){
                j++;
            }
            while( j < nums2.size()){
                if(nums1[i] < nums2[j]){
                    out[i] = nums2[j];
                    break;
                }
                j++;
            }
        }
        return out;
    }
};