class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int n1 = t.size();

        if(n != n1) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return (s == t);


        
    }
};