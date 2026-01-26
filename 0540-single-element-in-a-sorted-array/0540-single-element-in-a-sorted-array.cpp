class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st= 1;
        int end = n-2;
        int mid = (st+end)/2;
        if(n==1){
            return nums[0];
        }
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        while(st<=end){
            mid = (st+end)/2;
            if(nums[mid]!= nums[mid+1] && nums[mid]!= nums[mid-1] || st == end){
                return nums[mid];
            }else if(nums[mid] == nums[mid-1] && mid%2 == 0){
                end = mid;
            }else if (nums[mid] == nums[mid-1] && mid%2 != 0){
                st = mid+1;
            }else if(nums[mid] == nums[mid+1] && mid%2 == 0){
                st = mid +1;
            }else{
                end = mid;
            }
            
        }
        return -1;
        
    }
};