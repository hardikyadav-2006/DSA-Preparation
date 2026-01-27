class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(n < (long long)k*m){
            return -1;
        }

        int max_val =  0;
        for(int i = 0; i<n; i++){
            max_val = max(max_val, bloomDay[i]);
        }

        int st = 1;
        int end = max_val;
        int ans = INT_MAX;
        while(st<=end){
            int mid = (st+end)/2;
            int count = 0;
            int tmp = 0;
            for(int i = 0; i<n ;i++){
                if(bloomDay[i]<= mid){
                    tmp ++;
                    if(tmp == k){
                        tmp = 0;
                        count ++;
                    }
                }else{
                    tmp = 0;
                }
            }
            if(count >= m){
                ans = min(ans, mid);
                end = mid-1;
            }else{
                st = mid +1;
            }
        }
        return ans;
        
        
    }
};