class Solution {
public:
    void helper(int n, vector<string> & res, string& tmp, int x, int y){
        if(x==n&& y==n){
            res.push_back(tmp);
            return;
        }
        if(x<n){
            tmp +='(';
            helper(n, res, tmp, x+1, y);
            tmp.pop_back();
        }if(y<x){
            tmp +=')';
            helper(n, res, tmp, x, y+1);
            tmp.pop_back();

        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string tmp = "";
        int x = 0;
        int y = 0;
        helper(n, res, tmp, x, y);
        
        return res;
        
    }
};