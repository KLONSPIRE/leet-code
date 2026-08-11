class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> c;
        int i;
        for(i = 0; i < s.length(); i++){
            c[s[i]]++;
            c[t[i]]++;
        }
        c[t[i]]++;

        for(i = 0; i < t.length(); i++)
            if(c[t[i]] == 1)
                return t[i];

        return ' ';
    }
};