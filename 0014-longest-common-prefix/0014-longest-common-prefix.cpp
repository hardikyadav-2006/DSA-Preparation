class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        
        string prefix = strs[0];
        for(int i = 1; i<n;i++){
            string new_prefix = "";
            int n1 = min(strs[i].size(), prefix.size());
            for(int j = 0; j<n1; j++){
                if(prefix[j] == strs[i][j]){
                    new_prefix += prefix[j];
                }else{
                    break;
                }
            }
            prefix  = new_prefix;

        }
        return prefix;
        
        
    }
};