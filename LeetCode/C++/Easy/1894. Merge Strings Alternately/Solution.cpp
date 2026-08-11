class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length(), n2 = word2.length();
    string merge;

    int i = 0, j = 0, index = 0;
    while(index < n1 + n2){
        if(i < n1 && (index % 2 == 0 || j == n2)){
            merge.push_back(word1[i]);
            i++;
        }
        if(j < n2 && (index % 2 != 0 || i == n1)){
            merge.push_back(word2[j]);
            j++;
        }
        index++;
    }

    return merge;
    }
};