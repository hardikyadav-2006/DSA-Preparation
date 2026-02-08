class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == divisor) return 1;

        bool neg = false;
        if(dividend > 0 && divisor < 0) neg = true;
        if(dividend < 0 && divisor > 0) neg = true;

        long long int divd = abs((long)dividend);
        long long int div = abs((long)divisor);
        long long int res = 0;

        while(divd >= div){
            int count = 0;
            while(divd >= div*((long)1<<(count+1))){
                count ++;
            }
            res += (long)1<<count;
            divd = divd - div*((long)1<<count);
            

        }
        if(res > INT_MAX && !neg) return INT_MAX;
        else if (res < INT_MIN && neg) return INT_MIN;
        if(neg) return -res;
        return res;
        
    }
};