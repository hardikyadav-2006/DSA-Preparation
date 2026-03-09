class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> m;
        stack<int> s;
        int n = nums2.size();
        int n1 = nums1.size();
        for (int i = 0; i<n ; i++){
            if(s.empty()) s.push(nums2[i]);
            else{
                if(nums2[i] > s.top()){
                    while(!s.empty() && nums2[i]>s.top()){
                        m.emplace(s.top(), nums2[i]);
                        s.pop();
                    }
                    s.push(nums2[i]);
                }
                else{
                    s.push(nums2[i]);
                }
            }
        }
        while(!s.empty()){
            m.emplace(s.top(), -1);
            s.pop();
        }

        for(int i = 0; i<n1;i++){
            res.push_back(m[nums1[i]]);
        }
        return res;



        
    }
};