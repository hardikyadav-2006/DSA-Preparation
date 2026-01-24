class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int  n = nums.size(); 
        set<int> s;  
        vector<int> res;
        for(int i = 0; i<n; i++){
            int curr_el = nums[i];
            int count = 0;
            for(int j = 0; j<n; j++){
                if(nums[j] == curr_el){
                    count ++;
                }
            }
            if(count > n/3){
                s.emplace(nums[i]);
            }
        }

        for(auto val : s){
            res.push_back(val);
        }
        return res;   
    }
};