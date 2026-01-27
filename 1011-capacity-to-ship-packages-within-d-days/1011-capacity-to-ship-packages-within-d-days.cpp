class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        int min_val = 0;
        for(int i = 0; i<n; i++){
            sum += weights[i];
            min_val = max(min_val, weights[i]);
        }

        int st = min_val;
        int end = sum;
        int mid = (st+end)/2;
        int cap = INT_MAX;
        
        while(st <= end){
            int count = 1;
            int tmp = 0;
            
            mid = (st+end)/2;
            for(int i = 0; i<n; i++){
                if(tmp+weights[i] <= mid){
                    tmp += weights[i];
                }else{
                    count++;
                    tmp = weights[i];
                }
            }
                
            if(count<=days){
                cap = min(cap, mid);
                end = mid-1;
            }else{
                st = mid+1;
            }

        }
        return cap;
        
    }
};