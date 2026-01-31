class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.size();
        while(s.find(part) != -1){
            int idx = s.find(part);
            s.erase(idx,n);
        }
        return s;

        
    }
};