class Solution {
public:
    int myAtoi(string s) {
        int res = 0;
        int n = s.size();
        bool neg = false;
        bool start = false;
        for(int i = 0; i<n; i++){
            if(s[i]>='0' && s[i]<='9'){
                int digit = s[i]-'0';
                start = true;
                if (res > INT_MAX/10 || res == INT_MAX/10 && digit>7){ 
                    return neg? INT_MIN : INT_MAX;
                }
                res = (10*res) + (s[i]-48);
            }else if(s[i] == '-' && !start){
                neg = true;
                start = true;
            }else if(s[i] == '+' && !start){
                start = true;
            }else if(s[i] == ' ' && !start){
                continue;
            }else{
                break;
            }
        }
        if(neg){
            res = res*(-1);
        }
        
        return res;
        
    }
};