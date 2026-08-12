class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return 0;
        unordered_map<char, int> c;
        for(int i = 0; i < 26; i++){
            c[char('' + i)] = 0;
        }

        for(int i = 0; i < s.size(); i++)
            if(c[s[i]] % 2 != 0)
                return 0;

        return 1;
    }
};