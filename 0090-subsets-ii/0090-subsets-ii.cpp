class Solution {
public:

    void allSubsets(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &res){
        if(i == nums.size()){
            res.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        allSubsets(nums, ans, i+1, res);

        ans.pop_back();
        int idx = i+1; // idx initiated with i+1 because below if we remove idx we need to pass i+1
        while(idx < nums.size() && nums[idx] == nums[idx-1]) idx++;
        allSubsets(nums, ans, idx, res);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> ans;
        int i = 0;
        allSubsets(nums, ans, i, res);
        return res;
    }
        
    
};