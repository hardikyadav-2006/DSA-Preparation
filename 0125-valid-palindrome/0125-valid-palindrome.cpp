class Solution {
public:
    bool isAlphaNum(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int n = s.size();
        string res = "";
        for(int i = 0; i<n; i++){
            if(isAlphaNum(s[i])){
                res += s[i];
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                char tmp = tolower(s[i]);
                res += tmp;
            }else{
                continue;
            }
        }
        n = res.size();
        for(int i = 0; i<n/2; i++){
            if(res[i] != res[n-i-1]){
                return false;
            }
        }
        return true;
        
    }
};