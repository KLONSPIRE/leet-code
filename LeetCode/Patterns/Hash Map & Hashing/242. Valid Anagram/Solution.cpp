class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return 0;
        unordered_map<char, int> c;
        for(int i = 0; i < s.size(); i++)
            c[s[i]]++;

        for(int i = 0; i < t.size(); i++)   
            if(c[t[i]] == 0)
                return 0;

        return 1;
    }
};