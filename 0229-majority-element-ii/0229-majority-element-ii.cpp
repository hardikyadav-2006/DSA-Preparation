class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        vector<int> res;
        for(int num : nums){
            m[num]++;
            if(m[num] == n/3+1){
                res.push_back(num);
            }
        }
        return res;
        
    }
};