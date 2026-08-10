class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        

        
        for(int i = 0; i <s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                str.push(s[i]);
            else{
                if(str.empty())
                    return 0;
                else if ((s[i] == ')' && str.top() == '(') ||
                    (s[i] == ']' && str.top() == '[') ||
                    (s[i] == '}' && str.top() == '{'))
                    str.pop();
                else
                    return 0; 
            }
        }
        return 1;
    }
};