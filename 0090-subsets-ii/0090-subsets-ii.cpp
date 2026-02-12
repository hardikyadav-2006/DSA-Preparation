
class Solution {
public:
    void helper(vector<int>& nums, int i, vector<vector<int>>& res,vector<int> tmp){
        
        
        int n = nums.size();
        if(i  == n){
            res.push_back(tmp);
            return;
        }
        tmp.push_back(nums[i]);
        helper(nums, i+1,res,tmp);
        tmp.pop_back();
        int idx = i+1;
        while(idx<n && nums[idx] == nums[idx-1]){
            idx++;
        }
        
        helper(nums, idx,res,tmp);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> tmp;
        helper(nums, 0, res, tmp);
        
        return res;
        


        
        
    }
};