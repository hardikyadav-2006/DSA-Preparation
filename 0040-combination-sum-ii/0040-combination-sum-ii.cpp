
class Solution {
public:

    void helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& tmp, int i){
        int n = candidates.size();
        if(target==0){
            ans.push_back(tmp);
            return;
        } 
        if(i == n || target<0){
            return;
        }
            
        tmp.push_back(candidates[i]);
        helper(candidates, target-candidates[i], ans, tmp, i+1);
        tmp.pop_back();
        int next_idx = i+1;
        while(next_idx<n && candidates[next_idx] == candidates[i] ) {
            next_idx++;
        }
        helper(candidates, target, ans, tmp, next_idx);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int i =0;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, ans, tmp, i);
        return ans;
    }
};