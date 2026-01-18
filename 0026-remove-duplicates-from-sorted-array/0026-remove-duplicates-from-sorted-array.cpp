class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i = 1; i<n; i++){
            if(nums[j] != nums[i]){
                swap(nums[j+1], nums[i]);
                j++;
            }
        }
        for(int i = j+1;i<n; i++ ){
            nums[i]= '_';
        }
        return j+1;   
    }
};