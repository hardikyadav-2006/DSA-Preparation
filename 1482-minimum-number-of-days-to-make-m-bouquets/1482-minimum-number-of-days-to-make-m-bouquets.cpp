class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int max_val = 0;
        for(int i = 0; i<n; i++){
            max_val = max(max_val, bloomDay[i]);
        }

        if(n< (long long)k*m){
            return -1;
        }

        int st = 1;
        int end = max_val;
        while (st<=end){
            int mid = (st+end)/2;
            int tmp = 0;
            int count = 0;
            for(int i = 0;i<n; i++){
                if(bloomDay[i] <= mid){
                    count ++;
                    if(count == k){
                        tmp ++;
                        count = 0;
                    }
                }else{
                    count = 0;
                }
            }
            if(tmp >= m){
                end = mid-1;
            }else{ 
                st = mid+1;
            }
        }
        return st;

        
    }
};