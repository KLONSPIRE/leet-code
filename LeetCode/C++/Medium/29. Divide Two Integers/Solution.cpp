class Solution {
public:
    int divide(int dd, int dr) {
        int neg = 1;
        if(dd < 0){
            dd *= -1;
            neg *= -1;
        }
        if(dr < 0){
            dr *= -1;
            neg *= -1;
        }
        int ans = 0;
        while(dd - dr > 0){
            ans++;
            dd -= dr;
        }

        return ans * neg;
    }
};