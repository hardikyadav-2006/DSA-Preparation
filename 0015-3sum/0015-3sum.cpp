class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i+1;
            int sum = 0;
            int k = n-1;
        
            while(j<k){
                vector<int> tmp;
                sum = nums[i] + nums[j] + nums[k];

                if(sum<0){
                    j++;
                }else if (sum>0){
                    k--;
                }
                else{
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[k]);
                    res.push_back(tmp);
                    while (j < k && nums[j] == nums[j + 1]){

                        j++;
                    }
                    j++;
                    k--;

                }
            }
        }
        return res;
    }
};