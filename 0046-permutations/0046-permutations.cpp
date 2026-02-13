class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& res, int i){
        int sz = nums.size();
        if(i == sz-1){
            res.push_back(nums);
        }
        for(int j = i; j<sz; j++ ){
            swap(nums[i], nums[j]);
            helper(nums, res, i+1);
            swap(nums[i], nums[j]);

        }
        

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        helper(nums, res, 0);
        return res;
    }
};