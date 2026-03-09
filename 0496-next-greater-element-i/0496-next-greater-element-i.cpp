class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> m;
        stack<int> s;

        int n2 = nums2.size();
        int n1 = nums1.size();
        for (int i = n2-1; i>=0 ; i--){
            while(s.size()>0 && s.top()<=nums2[i]) s.pop();
            if(s.empty()) m.emplace(nums2[i],-1);
            else m.emplace(nums2[i], s.top());
            s.push(nums2[i]);
        }
        
        

        for(int i = 0; i<n1;i++){
            
            res.push_back(m[nums1[i]]);
        }
        return res;



        
    }
};