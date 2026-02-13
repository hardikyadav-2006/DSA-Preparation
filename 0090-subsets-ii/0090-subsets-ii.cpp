class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& res, vector<int>& tmp, int i){

        int n = nums.size();
        if(i==n){
            res.push_back(tmp);
            return;
        }
        tmp.push_back(nums[i]);
        helper(nums, res, tmp, i+1);
        tmp.pop_back();
        int idx = i+1;
        while(idx<n && nums[idx] == nums[idx-1]){
            idx++;
        }
        helper(nums, res, tmp, idx);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> tmp;
        int i = 0;
        helper(nums, res, tmp , i);
        return res;
        
    }
};