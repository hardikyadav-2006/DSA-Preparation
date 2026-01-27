class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int max_val = INT_MIN;
        for(int i = 0; i<n; i++){
            max_val = max(max_val, nums[i]);
        }
        int st = 1;
        int end = max_val;
        int mid = (st+end)/2;
        int res = 0;
        int ans = INT_MAX;
        while(st<=end){
            res = 0;
            mid = (st+end)/2;
            for(int i = 0;i<n; i++){
                if(nums[i]%mid == 0){
                    res += nums[i]/mid;
                }else{
                    res += (nums[i]/mid)+1;
                }
            }
            if(res <= threshold){
                ans = min(ans, mid);
                end = mid-1;

            }else{
                st = mid+1;
            }
        }
        return ans;
        
    }
};