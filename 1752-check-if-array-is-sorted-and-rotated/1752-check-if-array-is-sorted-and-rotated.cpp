class Solution {
public:
    int index(vector<int>& nums){
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                return (i+1)%n;
            }
        }
        return 0;
    }
    bool check(vector<int>& nums) {
        int x = index(nums);
        bool sorted= true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[(i+x)%nums.size()] > nums[(i+x+1)%nums.size()]){
                sorted = false;
                break;
            }
        }
        return sorted;
        
    }
};