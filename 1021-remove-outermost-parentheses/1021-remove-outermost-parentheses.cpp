class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string tmp = "";
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(s[i] == ')'){
                count --;
            }
            if(count > 0){
                tmp+= s[i];
            }
            if(s[i] == '('){
                count ++;
            }
            
        }
        return  tmp;
    }
};