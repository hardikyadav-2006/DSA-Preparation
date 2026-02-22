class Solution {
public:

    set<vector<int>> s;

    void getComb(vector<int>& arr, int idx, int tar, vector<int> &comb, vector<vector<int>> &ans){
        
        // Base Case 1
        if(idx == arr.size() || tar < 0){
            return;
        }

        if(tar == 0){
            if(s.find(comb) == s.end()){
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }

        comb.push_back(arr[idx]);
        getComb(arr, idx+1, tar-arr[idx], comb, ans); // single inclusion
        getComb(arr, idx, tar-arr[idx], comb, ans); // multiple inclusion
        comb.pop_back();
        getComb(arr, idx+1, tar, comb, ans); // exclusion

    }

    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<int> comb;
        vector<vector<int>> ans;
        int idx = 0;

        getComb(arr, idx, tar, comb, ans);
        return ans;
    }
};