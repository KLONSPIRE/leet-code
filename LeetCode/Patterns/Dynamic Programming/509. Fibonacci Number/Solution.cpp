class Solution {
public:
    int fib(int n) {
        int f1 = 0, f2 = 1;
        if(n <= 1)
            return 0;
        else if(n == 2)
            return 1;
        else{
            for(int i = 2; i <= n; i++){
                f2 = f1 + f2;
                f1 = f2 - f1;
            }
            return f2;
        }
    }
};