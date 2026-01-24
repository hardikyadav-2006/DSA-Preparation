class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i = 0;i <n; i++){
            if(m.find(nums[i]) == m.end()){
                m.emplace(nums[i],1);
            }
            else{
                m[nums[i]] += 1;
            }
        }

        for(auto val : m){
            if(val.second > n/3){
                res.push_back(val.first);
            }
        }
        return res;
    }
};