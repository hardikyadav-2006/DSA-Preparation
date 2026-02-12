class Solution {
public:

    void getPerm(vector<int> &nums, int idx, vector<vector<int>> &res){
        if(idx == nums.size()){
            res.push_back(nums);
            return;
        }

        for(int i = idx; i<nums.size(); i++){
            swap(nums[idx], nums[i]);
            getPerm(nums, idx+1, res);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int idx = 0;

        getPerm(nums, idx, res);   
        return res;
    }
    
};