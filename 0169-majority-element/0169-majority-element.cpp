class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i = 0; i<n; i++){
            if(m.find(nums[i]) == m.end()){
                m.emplace(nums[i], 1);
            }else{
                m[nums[i]] += 1;
            }
        }
        int max = 0;
        for(int i = 0; i<n; i++){
            if(m[nums[i]] > n/2){
                max= nums[i];
                break;
            }
        }
        return max;
        
    }
};