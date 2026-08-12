class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size())
            return -1;
        int i, j;
        for(i = 0; i <= haystack.length() - needle.length(); i++){
            if(haystack[i] == needle[0] && haystack[i+needle.size() - 1] == needle[needle.size() - 1]){
                for(j = 1; j < needle.size()/2; j++)
                    if(haystack[i+j] != needle[i+j] || haystack[i+needle.size() - 1 - j] != needle[needle.size() - j- 1])
                        break;
                if(j >= needle.size()/2)
                    return i;
            }
        }

        return -1;
    }
};