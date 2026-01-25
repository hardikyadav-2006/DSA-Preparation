class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int mid = (st+end)/2;
        while(st<=end){
            mid = (st+end)/2;
            if(nums[mid] == target){
                return true;
            }
            else if(nums[mid] == nums[st] && nums[mid] == nums[end]){
                int sum1 = 0;
                int sum2 = 0;
                for(int i = st; i<=mid; i++){
                    sum1+= nums[i];
                }for(int i = mid; i<=end; i++){
                    sum2+= nums[i];
                }
                if(sum1!= (mid-st+1)*nums[mid]){
                    end = mid-1;
                }else{
                    st = mid +1;
                }
                
            }else if(nums[mid] >= nums[st]){
                if(target < nums[mid] && target >= nums[st]){
                    end = mid-1;
                }else{
                    st=mid+1;
                }
            }else if(nums[mid]<=nums[end]){

                if(target > nums[mid] && target <= nums[end]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }

            }
        }
        return false;
        
    }
};