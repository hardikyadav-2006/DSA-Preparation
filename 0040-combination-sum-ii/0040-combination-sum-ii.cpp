class Solution {
public:
    void helper(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& tmp, int i ){
        int n = candidates.size();
        if(target == 0){
            res.push_back(tmp);
            return;
        }
        if(target<0 || i>=n) return;
        tmp.push_back(candidates[i]);
        helper(candidates, target-candidates[i], res, tmp, i+1);
        tmp.pop_back();
        int nxt_idx = i+1;
        while( nxt_idx <n &&candidates[i] == candidates[nxt_idx] ){
            nxt_idx++;
        }
        helper(candidates, target, res, tmp, nxt_idx);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> tmp;
        int i =0;
        helper(candidates, target, res, tmp, i);
        return res;
        
    }
};