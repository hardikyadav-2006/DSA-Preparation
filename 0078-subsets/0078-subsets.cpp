class Solution {
public:
    void helper( vector<int>& nums, vector<vector<int>>& res, vector<int>& tmp, int i){
        int n = nums.size();
        if(i == n){
            res.push_back(tmp);
            return;
        }
        tmp.push_back(nums[i]);
        helper(nums, res, tmp, i+1);
        tmp.pop_back();
        
        helper(nums, res, tmp, i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;

        helper(nums, res, tmp, 0);
        return res;
        
    }
};