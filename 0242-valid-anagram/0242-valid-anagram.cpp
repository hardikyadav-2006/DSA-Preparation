class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int n1 = t.size();
        if(n!=n1) return false;
        unordered_map<char, int> m;

        for(int i = 0; i<n; i++){
            m[s[i]]++;
            m[t[i]]--;
        }

        for(auto p : m){
            if(p.second != 0){
                return false;
            }
        }
        return true;
        
    }
};