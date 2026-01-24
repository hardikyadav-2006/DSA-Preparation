class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int mid = (st+end)/2;
        bool found = false;
        vector <int> res;
        while(st<end){
            mid = (st+end)/2;
            if(nums[mid] == target){
                found = true;
                
            }if(nums[mid] >= target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        if(!found){
            res.push_back(-1);
        }else{
            res.push_back(st);
        }

        st = 0;
        end = n-1;
        mid = (st+end)/2;
        found = false;
        while(st<=end){
            mid = (st+end)/2;
            if(nums[mid] == target){
                found = true;
                
            }if(nums[mid] <= target){
                st = mid+1;
               
            }else{
                end = mid-1;    
            }
        }
        if(!found){
            res.push_back(-1);
        }else{
            res.push_back(end);
        }
        
        return res;
    
        
    }
};