class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long int N = n;
        if(N<0){
            N = -N;
            x = 1/x;
        }
        while(N>0){
            if(N%2 != 0){
                ans = ans * x;
                N=N-1;
            }else{
                x *= x ;
                N=N/2;
            }
        }
        return ans;

        
    }
};