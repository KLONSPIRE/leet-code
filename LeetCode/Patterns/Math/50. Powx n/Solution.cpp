class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        
        if(n < 1)
            return 1 / myPow(x, (long long)n*-1);
        
        double half = myPow(x, n/2);
        if(n % 2 == 0)
            return half*half;
        else
            return x*half*half;
    }
};