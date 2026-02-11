class Solution {
public:
    void helper(vector<int>& nums, int i, vector<vector<int>>& res,vector<int> ans){
        
        int n = nums.size();
        if(i  == n){
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        helper(nums, i+1,res,ans);
        ans.pop_back();
        helper(nums, i+1,res,ans);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        helper(nums, 0, res, tmp);
        return res;
        


        
        
    }
};