class Solution {
public:
    void helper(int k, int n, vector<vector<int>>& res, vector<int>& tmp, int i){
        if(n==0 && k==0){
            res.push_back(tmp);
            return;
        }
        if(n<0 || k<0 || i>9){
            return;
        }
        tmp.push_back(i);
        helper(k-1, n-i, res, tmp, i+1);
        tmp.pop_back();
        helper(k, n, res, tmp, i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> tmp;
        int i = 1;
        helper(k, n, res, tmp, i);
        return res;
    }
};