class Solution {
public:
    int maxDepth(string s) {
        int max_val = 0;
        int n = s.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                count++;
                max_val = max(count, max_val);

            }else if(s[i] == ')'){
                count--;
            }else{
                continue;
            }

        }
        return max_val;
    }
};