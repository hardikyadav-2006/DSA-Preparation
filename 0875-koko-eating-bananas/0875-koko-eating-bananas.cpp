class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max_val = INT_MIN;
        for(int i = 0; i<n; i++){
            max_val = max(max_val, piles[i]); 
        }

        int st = 1;
        int end = max_val;
        int mid = (st+end)/2;
        int tot = 0;
        int ans;
        while(st<=end){
            tot = 0;
            mid = (st+end)/2;
            for(int i = 0; i<n ;i++){
                if(piles[i]%mid == 0){
                    tot += piles[i]/mid;
                }else{
                    tot += (piles[i]/mid) +1;
                }
            }
            if(tot > h){
                st = mid+1;
            }else{
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
        
    }
};