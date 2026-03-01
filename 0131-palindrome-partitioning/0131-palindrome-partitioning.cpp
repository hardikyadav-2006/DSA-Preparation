class Solution {
public:
    bool isPal(string s){
        string temp = s;
        reverse(s.begin(),s.end());
        return temp == s;
    }
    void getAllParts(string s, vector<vector<string>> &ans, vector<string> &partition ){
        if(s.empty()){
            ans.push_back(partition);
            return;
        }

        for(int i = 0; i<s.size(); i++){
            if(isPal(s.substr(0,i+1))){
                partition.push_back(s.substr(0,i+1));
                getAllParts(s.substr(i+1), ans, partition);
                partition.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;
    
        getAllParts(s, ans, partition);
        return ans;
    }
};