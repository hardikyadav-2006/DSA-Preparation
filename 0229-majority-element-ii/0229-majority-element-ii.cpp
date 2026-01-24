class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int  n = nums.size(); 
        int q = (n/3)+1;
        unordered_map<int, int> m; 
        vector<int> res;
        for(int i = 0; i<n; i++){
            if(m.find(nums[i]) != m.end()){
                m[nums[i]] += 1;
                if(m[nums[i]] == q ){
                    res.push_back(nums[i]);
                }
            }else{
                m.emplace(nums[i],1);
                if(m[nums[i]] == q){
                    res.push_back(nums[i]);
                }
            }
        }
        return res;   
    }
};