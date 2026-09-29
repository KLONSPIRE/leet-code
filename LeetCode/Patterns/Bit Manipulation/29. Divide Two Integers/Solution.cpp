class Solution {
public:
    int divide(int dd, int dr) {
        int neg = 1;
        if(dd < 0){
            dd = -dd;
            neg = -neg;
        }
        if(dr < 0){
            dr = -dr;
            neg = -neg;
        }
        int ans = 0;
        while(dd - dr > 0){
            ans++;
            dd -= dr;
        }

        return ans * neg;
    }
};