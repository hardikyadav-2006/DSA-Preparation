class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        int res = 0;
        for(int i = 0; i<n; i++){
            if(s.find(nums[i]) != s.end() ) res = res^nums[i];
            else{
                s.emplace(nums[i]);
            }
        }
        return res;

        
    }
};