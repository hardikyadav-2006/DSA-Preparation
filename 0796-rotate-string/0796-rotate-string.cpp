class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1 = s.size();
        int n2 = goal.size();

        if(n1 != n2) return false;

        string double_s = s+s;

        if(double_s.find(goal) != -1) return true;
        return false; 
    }
};