class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int curr_el = nums[0];
        int count = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == curr_el){
                count ++;
            }else{
                count --;
            }

            if(count <= 0){
                curr_el = nums[i+1];
            }
        }
        return curr_el;
    }
};