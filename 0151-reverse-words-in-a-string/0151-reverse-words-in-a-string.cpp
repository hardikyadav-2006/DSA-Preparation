class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(s.begin(), s.end());
        string res = "";

        for(int i = 0; i<n; i++){
            string word ="";
            while(i<n && s[i] != ' '){
                word += s[i];
                i++;
            }
            
            if(word.size()>0){
                reverse(word.begin(), word.end());
                res += ' ' + word;
            }
        }
        return res.substr(1);
        
    }
};