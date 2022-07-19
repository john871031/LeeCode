class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==0) return 0;
        else if(divisor==1) return dividend;
        else if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        
        int flag = 1;
        int ans = 0;
        long exp;
        long start;
        if(dividend<0){
            flag *= -1;
            start = abs(dividend);
        }
        if(divisor<0){
            flag *= -1;
            divisor = abs(divisor);
        }
        
        while(start >= divisor){
            int i = 0;
            exp = 0;
            while(1){
                exp = pow(2, i);
                if(exp*divisor > start){
                    exp = pow(2, i-1);
                    break;
                }
                i++;
            }
            ans += exp;
            start -= exp*divisor;
        }
        return ans*flag;
    }
};
