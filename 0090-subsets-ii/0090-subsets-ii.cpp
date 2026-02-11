
class Solution {
public:
    void helper(vector<int>& nums, int i, set<vector<int>>& res,vector<int> tmp){
        
        int n = nums.size();
        if(i  == n){
            sort(tmp.begin(), tmp.end());
            res.emplace(tmp);
            return;
        }
        helper(nums, i+1,res,tmp);
        tmp.push_back(nums[i]);
        helper(nums, i+1,res,tmp);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> res;
        vector<int> tmp;
        helper(nums, 0, res, tmp);
        vector<vector<int>> ans;
        for(auto val: res){
            ans.push_back(val);
        }
        return ans;
        


        
        
    }
};