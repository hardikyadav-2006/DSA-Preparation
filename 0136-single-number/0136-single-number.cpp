class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i =0;
        int res;
        while(i<n){
            if(i+1 == n){
                res = nums[i];
            }
            else if(nums[i]!=nums[i+1]){
                res= nums[i];
                break;
            }
            i=i+2;
        }
        return res;
    }
};