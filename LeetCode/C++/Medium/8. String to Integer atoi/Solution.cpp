class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int sign = 1;
        bool nosign = true;
        for(int i = 0; i < s.size(); i++)
            if((s[i] > '0' && s[i] <= '9') || (s[i] == '0' && ans != 0)){
                ans *= 10;
                ans += s[i] - '0';
            }
            else if(s[i] == '0' && ans == 0)
                nosign = false;
            else if(s[i] == '-' && nosign == true){
                sign *= -1;
                nosign = false;
            }
            else if(s[i] == ' ' && ans == 0)
                continue;
            else if(s[i] == '+' && nosign == true)
                nosign = false;
            else
                break;

         ans *= sign;

        if (ans > INT_MAX)
            return INT_MAX;

        if (ans < INT_MIN)
            return INT_MIN;

        return ans;
    }
};