class Solution {
public:
    void helper(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& tmp, int i){
        int n = candidates.size();
        if(target<0|| i==n ){
            return;

        }
        if(target==0){
            res.push_back(tmp);
            return;
        }
        
        tmp.push_back(candidates[i]);
        helper(candidates, target-candidates[i], res, tmp, i);
        tmp.pop_back();
        helper(candidates, target, res, tmp, i+1);
        

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> tmp;
        int i = 0;
        helper(candidates, target, res, tmp, i);
        return res;
    }
};