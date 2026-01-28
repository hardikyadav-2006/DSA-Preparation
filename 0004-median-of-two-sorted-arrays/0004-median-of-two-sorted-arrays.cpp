class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> tmp;
        while(i+j<=n1+n2-1){
            if(j == n2){
                tmp.push_back(nums1[i]);
                i++;
            }else if(i == n1){
                tmp.push_back(nums2[j]);
                j++;  
            }
            else if(nums1[i] <= nums2[j] || j == n2){
                tmp.push_back(nums1[i]);
                i++;
            }else{
                tmp.push_back(nums2[j]);
                j++;
            }
        }
        int n = tmp.size();
        if(n%2 == 1){
            return tmp[n/2];
        }else{
            return (double)(tmp[n/2] + tmp[n/2 -1])/2.0;
        }
    }
};