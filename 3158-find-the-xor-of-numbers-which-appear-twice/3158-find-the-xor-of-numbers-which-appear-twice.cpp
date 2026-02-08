class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        int res = 0;
        for(int i = 0; i<n; i++){
            if(m.find(nums[i]) != m.end() ) res = res^nums[i];
            else{
                m.emplace(nums[i],1);
            }
        }
        return res;

        
    }
};