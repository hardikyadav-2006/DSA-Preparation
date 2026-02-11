class Solution {
public:
    void helper(vector<int>& nums, int i, vector<vector<int>>& res,vector<int> tmp){
        
        int n = nums.size();
        if(i  == n){
            res.push_back(tmp);
            return;
        }
        helper(nums, i+1,res,tmp);
        tmp.push_back(nums[i]);
        helper(nums, i+1,res,tmp);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        helper(nums, 0, res, tmp);
        return res;
        


        
        
    }
};