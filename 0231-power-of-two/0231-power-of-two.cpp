class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        for(int i = 0; i<=30; i++){
            int tmp = 1<<i;
            if(n==tmp) return true;

        }
        return false;

        
    }
};