class Solution {
public:
    int titleToNumber(string cT) {
        int ans = 0;
        int x = 0;
        for(int i = cT.size() - 1; i >= 0; i--){
            ans += int(cT[i] - 'A' + 1) * pow(26, x++);
        }

        return ans;
    }
};