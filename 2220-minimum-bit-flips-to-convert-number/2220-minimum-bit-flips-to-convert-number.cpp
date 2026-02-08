class Solution {
public:
    int minBitFlips(int start, int goal) {
        int tmp = start ^ goal;
        int count = 0;
        while(tmp>0){
            if((tmp & 1)  == 1){
                count ++;
            }
            tmp=tmp/2;
        }
        return count;
        
    }
};