class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1;
        int max_product = INT_MIN;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            for(int j = i;j<n;j++){
                product *= nums[j];
                max_product = max(product, max_product);
            }
            product = 1;
        }
        return max_product;
        
    }
};