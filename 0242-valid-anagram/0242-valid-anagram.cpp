class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int n1 = t.size();

        if(n != n1) return false;

        unordered_map<char, int> m;
        for(int i = 0; i<n; i++){
            if(m.find(s[i]) != m.end()){
                m[s[i]] +=1;
            }else{
                m.emplace(s[i], 1);
            }

            if(m.find(t[i]) == m.end()){
                m.emplace(t[i], -1);
            }else{
                m[t[i]] -= 1;
            }
        }

        for(auto p : m){
            if(p.second != 0) return false;
        }
        return true;




        
    }
};