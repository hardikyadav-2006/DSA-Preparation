class Solution {
public:
    void helper(double x, long long int n, double &res){
        
        if(n == 1){
            res = res*x;
            return;

        } 
        if(n%2 == 0){
            helper(x*x, n/2, res);
        }else{
            res = res*x;
            helper(x*x, n/2, res);
        }
    }
    double myPow(double x, long long int n) {
        if(n== 0 ) return 1;
        double res = 1;
        if(n<0){
            n=-n;
            x=1/x;
        }
        helper(x, n, res);
        return res;


        
    }
};