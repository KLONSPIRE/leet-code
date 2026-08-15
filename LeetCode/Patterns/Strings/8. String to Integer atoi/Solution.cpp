class Solution {
public:
    int myAtoi(string s) {
        int ans = 0,
        int sign = 1;
        bool nozero = true;
        for(int i = 0; i < s.size(); i++)
            if((s[i] > '0' && s[i] <= '9') || (s[i] == '0' && ans != 0)){
                ans *= 10;
                ans += s[i] - '0';
            }
            else if(s[i] == '0' && ans == 0)
                nozero = false;
            else if(s[i] == '-' && nozero == true)
                sign *= -1;
            else if(s[i] == ' ' && ans == 0)
                continue;
            else
                break;

        return ans*sign;
    }
};