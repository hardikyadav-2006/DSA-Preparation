class Solution {
public:

    void helper(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& tmp, int i , int sum){
        int n = candidates.size();
        if(i==n){
            if(sum == target) res.push_back(tmp);
            return;
        }
        tmp.push_back(candidates[i]);
        sum+= candidates[i];
        helper(candidates, target, res, tmp, i+1, sum);
        tmp.pop_back();
        sum = sum-candidates[i];
        helper(candidates, target, res, tmp, i+1,sum );

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> tmp;
        int i =0;
        int sum = 0;
        helper(candidates, target, res, tmp, sum , i);
        return res;
    }
};