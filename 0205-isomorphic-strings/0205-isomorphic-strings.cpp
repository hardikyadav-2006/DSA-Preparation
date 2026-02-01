class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int n1 = t.size();
        if(n != n1) return false;

        unordered_map<char, char> m;
        for(int i = 0; i<n; i++){
            if(m.find(s[i]) != m.end()){
                if(m[s[i]] != t[i]){
                    return false;
                }
            }else{
                m.emplace(s[i],t[i]);
            }
        }
        return true;
        
    }
};