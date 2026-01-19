class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int curr_el = nums[0];
        for(int i = 0; i<n; i++){
            if(nums[i] == curr_el){
                count ++;
            }else if(nums[i] != curr_el){
                count --;
            }

            if(count <=0){
                curr_el = nums[i];
            }
        }
        return curr_el;
        
        
    }
};