class Solution {
public:
    int countPrimes(int n) {
        vector<bool> ber(n+1, 1);
        int count = 0;
        for(int i = 2; i<n;i++){
            if(ber[i] == 1){
                count ++;
                for(int j = i; j<=n; j=j+i){
                    ber[j] = 0;
                }
            }


        }
        return count;
    }
};