class Solution {
public:
    double myPow(double x, long long int n) {
        if (n==0) return 1;
        double res=1;
        if(n>0){
            while (n>1){
                if(n%2 == 0){
                    x=x*x;
                    n=n/2;
                }else{
                    res = res*x;
                    x=x*x;
                    n=n/2;
                }
            }
        res = res*x;
        }else {
            n = -n;
            x=1/x;
            while (n>1){
                if(n%2 == 0){
                    x=x*x;
                    n=n/2;
                }else{
                    res = res*x;
                    x=x*x;
                    n=n/2;
                }
            }
        res = res*x;

        }
        
        return res;
        
    }
};