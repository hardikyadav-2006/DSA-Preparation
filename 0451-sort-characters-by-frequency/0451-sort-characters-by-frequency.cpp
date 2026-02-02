class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> m;
        for(int i = 0; i<n; i++){
            m[s[i]]++;
        }
        vector<string> bucket(n+1, "");
        for(auto p : m){
            bucket[p.second] += p.first;
        }
        string res = "";
        int n1 = bucket.size();
        for(int i = n1-1; i>=0; i--){
            int count = i;
            if(bucket[i].size() >0){
                for(char ch: bucket[i]){
                    res.append(i, ch);

                }
                
            }
            
        }
        return res;
    }
};