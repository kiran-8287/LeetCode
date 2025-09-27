class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        double med1 = 0;
        double med2 = 0;
        if(n != 0){
            if(n%2 == 0){
                med1 = (nums1[n/2] + nums1[(n/2)-1])/2.0;
            }
            else{
                med1 = nums1[n/2];
            }
        }
        if(m!=0){
            if(m%2 == 0){
                med2 = (nums2[m/2] + nums2[(m/2)-1])/2.0;
            }
            else{
                med2 = nums2[m/2];
            }
        }
        return (med1+med2)/2.0;
    }
};