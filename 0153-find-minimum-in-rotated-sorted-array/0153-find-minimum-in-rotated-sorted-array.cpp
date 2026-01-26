class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int mid = (st+end)/2;
        while(st<=end){
            mid = (st+end)/2;
            if(st == end){
                
                return nums[mid];
            }else if(nums[end] < nums[mid]){
                st = mid+1;
            }else{
                end = mid;
            }
        }
        return -1;
        
    }
};