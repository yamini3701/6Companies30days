//#6Companies30Days Challenge Walmart-15 (Divide 2 Integers)

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==-2147483648 && divisor==-1)
            return 2147483647;
        long quotient;
        quotient = dividend/divisor;
        return quotient;
        
    }
};
