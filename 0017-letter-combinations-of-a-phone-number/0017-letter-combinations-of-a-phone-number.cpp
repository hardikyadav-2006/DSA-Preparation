class Solution {
public:
    void helper(string digits, vector<string>& ans, string& tmp, int i){
        int n = digits.size();
        vector<string> link = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(i==n){
            ans.push_back(tmp);
            return;
        }
        string asd = link[digits[i]-50];
        for(int j = 0; j<asd.size(); j++){
            tmp.push_back(asd[j]);
            helper(digits, ans, tmp, i+1);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string tmp = "";
        int i = 0;
        helper(digits, ans, tmp, i);
        return ans;
        
    }
};