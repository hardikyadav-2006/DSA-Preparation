class Solution {
public:

    void helper(int n, vector<string>& res, int x, int y, string& tmp){
        if(x==n&& y==n) {
            res.push_back(tmp);
            return ;
        }
        if(x<n){
            tmp+='(';
            helper(n,res,x+1,y,tmp);
            tmp.pop_back();

        }
        
        if(y<x){
            tmp+=')';
            helper(n,res,x,y+1,tmp);
            tmp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string tmp = "";
        helper(n, res, 0, 0, tmp);
        return res;  
    }
};