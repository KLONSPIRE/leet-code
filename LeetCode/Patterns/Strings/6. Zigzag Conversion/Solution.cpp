class Solution {
public:
    string convert(string s, int numRows) {
        string str = "";

        for (int i = 1; i <= numRows; i++){
            int j = 0;
            bool lower = true;
            for (int k = 0; k < s.size(); k++) {
                if (lower == true)
                    j++;
                else
                    j--;
                if (j == i)
                    str.push_back(s[k]);
                if (j == numRows)
                    lower = false;
                else if (j == 1)
                    lower = true;
            }
        }
        return str;
    }
};