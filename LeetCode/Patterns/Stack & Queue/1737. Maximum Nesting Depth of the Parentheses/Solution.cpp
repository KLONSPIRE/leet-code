class Solution {
public:
    int maxDepth(string s) {
        stack<char> p;
        int max = 0, c = 0;
        for(char x: s)
            if(x == '('){
                p.push(x);
                c++;
            }else if(x == ')'){
                if(max < c)
                    max = c;
                c--;
                p.pop();
            }
        
        return max;
    }
};