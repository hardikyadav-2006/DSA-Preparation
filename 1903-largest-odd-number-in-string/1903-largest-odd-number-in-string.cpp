class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int idx = -1;
        for(int i = n-1; i>=0; i--){
            if((int)num[i] % 2 != 0){
                idx = i;
                break;
            }
        }

        return num.substr(0,idx+1);
        
    }
};