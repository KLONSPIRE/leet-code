class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return 0;
        int count[26] = {};
        for(int i = 0; i < s.size(); i++)
            count[s[i] - 'a']++;

        for(int i = 0; i < t.size(); i++)
            count[t[i] - 'a']--;

        for(int i = 0; i < s.size(); i++)
            if(count[s[i] - 'a'] != 0)
                return 0;

        return 1;
    }
};