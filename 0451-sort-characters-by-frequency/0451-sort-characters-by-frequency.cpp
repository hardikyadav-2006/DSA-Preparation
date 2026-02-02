class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> m;
        vector<pair<int, int>> med;
        for(int i = 0; i<n; i++){
            m[s[i]]++;
        }

        for(auto p : m){
            med.push_back({p.second, p.first});
        }
        string res = "";
        sort(med.rbegin(), med.rend());
        for(auto p: med){
            int count = p.first;
            while(count>0){
                res += p.second;
                count--;
            }
        }
        return res;
    }
};