class Solution {
public:
    int memo[301];
    bool match(string s,vector<string>& wordDict, int i, int j){
        int n = wordDict[j].size();
        if(n+i>s.size()){
            return false;
        }
        for(int p = 0; p<n; p++){
            if(s[i+p] != wordDict[j][p]){
                return false;
            }

        }
        return true;
    }

    bool helper(string s, vector<string>& wordDict, int i){
        int n = s.size();
        if(i == n){
            return true;
        }
        if(memo[i] == 0){
            return false;
        }
        for(int j = 0;j<wordDict.size(); j++){
            if(match(s, wordDict, i, j)){
                if(helper(s, wordDict, i+wordDict[j].size())){
                    return memo[i] = 1;
                }
            }
        }
        return memo[i] = 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for(int i = 0;i<301; i++){
            memo[i] = -1;
        }
        if(helper(s, wordDict, 0)) return true;
        return false;
        
    }
};