class Solution {
public:
    int maxDepth(string s) {
        int max = 0, c = 0;
        for(char x: s)
            if(x == '(')
                c++;
            else if(x == ')'){
                if(max < c)
                    max = c;
                c--;
            }
        
        return max;
    }
};