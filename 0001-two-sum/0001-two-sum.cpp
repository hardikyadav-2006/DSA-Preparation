class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            m.emplace(nums[i], i);
        }
        for(int i = 0; i<n; i++){
            if(m.find(target-nums[i])!= m.end() && i != m[target-nums[i]]){
                res.push_back(i);
                res.push_back(m[target-nums[i]]);
                break;
            }
        }
        return res;
        
    }
};