class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1 = s.size();
        int n2 = goal.size();

        if(n1 != n2) return false;
        for(int i = 0; i<n1; i++){
            bool match = false;
            for(int j = 0; j<n1; j++){
                if(s[j] == goal[(j+i)%n1]){
                    match = true;
                }else{
                    match = false;
                    break;
                }
            }
            if(match){
                return true;
            }
        }
        return false;


        
    }
};