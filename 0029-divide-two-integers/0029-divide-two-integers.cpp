class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        bool sign = true;
        if(dividend <0 && divisor > 0) sign = false;
        if(dividend >0 && divisor < 0) sign = false;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        int count = 0;
        long long int res = 0;
        long div = labs((long)divisor);
        long divd = labs((long)dividend);
        while(divd >= div){
            int count = 0;
            while(divd >= div<<(count+1)){
                count ++;
            }
            
            res += (1LL<<count);
            divd = divd - (div*(1<<count));
            
        }
        if(res > INT_MAX && sign == true) return INT_MAX;
        if(res > INT_MAX && sign == false) return INT_MIN;
        if(!sign ) return - res;
        return res;
        
    }
};