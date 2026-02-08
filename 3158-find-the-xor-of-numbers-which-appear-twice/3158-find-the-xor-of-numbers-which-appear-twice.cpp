class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int> tmp(100,0);
        int n = nums.size();
        int res = 0;
        for(int i = 0; i<n; i++){
            if(tmp[nums[i]] >0 ) res = res^nums[i];
            else{
                tmp[nums[i]] = 1;
            }
        }
        return res;

        
    }
};