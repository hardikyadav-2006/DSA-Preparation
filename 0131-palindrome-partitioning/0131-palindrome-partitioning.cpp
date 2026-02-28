class Solution {
public:
    bool isPal(string s, int idx, int i){
        string tmp1 = s.substr(idx, i+1-idx);
        string tmp2 = s.substr(idx, i+1-idx);
        reverse(tmp2.begin(), tmp2.end());
        if(tmp1 == tmp2) return true;
        return false;
        
    }

    void helper(string s, vector<vector<string>>& res, vector<string>& tmp, int idx){
        int n = s.size();
        if(idx == n){
            res.push_back(tmp);
            return ;

        }
        for(int i = idx; i<n; i++){
            if(isPal(s, idx, i)){
                tmp.push_back(s.substr(idx,i+1-idx));
                helper(s, res, tmp, i+1);
                tmp.pop_back();
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<string> tmp;
        vector<vector<string>> res;
        int i = 0;
        helper(s, res, tmp, i);
        return res;  
    }
};