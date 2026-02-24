class Solution {
public:
    void helper(string digits, vector<string>& res, string& tmp, int i){
        vector<string> imp={"abc", "def", "ghi","jkl","mno","pqrs", "tuv", "wxyz"};
        int n = digits.size();
        if(i==n){
            res.push_back(tmp);
            return;
        }
        string asd = imp[digits[i]-50];
        for(char ch : asd){
            tmp.push_back(ch);
            helper(digits, res, tmp, i+1);
            tmp.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> res;
        string tmp ="";
        int i = 0;
        int j = 0;
        int k =0;
        helper(digits, res, tmp, i);
        return res;

        
    }
};