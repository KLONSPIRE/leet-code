class Solution {
public:
    string convertToTitle(int cn) {
        string ans = "";
        while (cn > 0) {
            cn -= 1;
            ans.push_back(char('A' + cn % 26));
            cn /= 26;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};