class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max_val = INT_MIN;
        for(int i = 0; i<n; i++){
            max_val = max(piles[i], max_val);
        }
        
        int st = 1;
        int end = max_val;
        int mid = (st+end)/2;
        long long int tot = 0;
        int ans= 0;
        while(st<=end){
            mid = (st+end)/2;
            tot = 0;
            for(int j = 0; j<n; j++){
                if(piles[j]%mid == 0){
                    tot += piles[j]/mid;
                }else{
                    tot += (piles[j]/mid)+1;
                }
            }

            if(tot > h){
                st = mid+1;
            }
            else {
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
    }
};