class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, j;
        for(i = 0; i < haystack.length() - needle.length(); i++){
            if(haystack[i] == needle[i] && haystack[i+needle.size() - 1] == needle[i+needle.size() - 1]){
                for(j = 1; j < needle.size()/2; j++)
                    if(haystack[i+j] != needle[i+j] || haystack[i+j+needle.size() - 1] != needle[i+ j + needle.size() - 1])
                        break;
                if(j == needle.size()/2)
                    return i;
            }
        }

        return -1;
    }
};