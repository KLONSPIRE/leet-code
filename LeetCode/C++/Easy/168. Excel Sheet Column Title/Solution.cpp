class Solution {
public:
    string convertToTitle(int cn) {
        string ans = "";
        vector<int> ind;
        while (cn > 0) {
            cn -= 1;
            ind.push_back(cn % 26);
            cn /= 26;
        }

        for(int i = ind.size() - 1; i >= 0; i--)
            ans.push_back(char('A' + ind[i]));

        return ans;
    }
};