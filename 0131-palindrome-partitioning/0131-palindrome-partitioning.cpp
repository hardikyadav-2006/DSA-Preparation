class Solution {
public:
    bool isPal(string s){
        string tmp = s;
        reverse(tmp.begin(), tmp.end());
        return s == tmp;
    }
    void helper(string s, vector<vector<string>>& res, vector<string>& tmp){
        if(s.empty()){
            res.push_back(tmp);
            return;
        }
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(isPal(s.substr(0,i+1))){
                tmp.push_back(s.substr(0,i+1));
                helper(s.substr(i+1), res, tmp);
                tmp.pop_back();

            }
            
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> tmp;
        helper(s, res, tmp);
        return res;
    }
};