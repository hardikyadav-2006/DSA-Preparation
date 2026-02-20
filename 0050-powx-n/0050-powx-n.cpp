class Solution {
public:
    void helper(double x,long long int n, double& res){
        if(n==1){
            res = res*x;
            return;
        }
        if(n%2==0){
            x=x*x;
            helper(x, n/2,res);
        }else{
            res=res*x;
            x=x*x;
            helper(x, n/2, res);
        }

    } 
    double myPow(double x, long long int n) {
        if(n==0) return 1;
        if(n<0){
            n=-n;
            x=1/x;
        }
        double res = 1;
        helper(x, n, res);
        return res;
        
    }
};