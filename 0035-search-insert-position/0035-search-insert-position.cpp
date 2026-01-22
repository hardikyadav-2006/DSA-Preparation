class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int mid = (st+end)/2;
        while(st<=end){
            mid = (st+end)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return st;
        
        
    }
};