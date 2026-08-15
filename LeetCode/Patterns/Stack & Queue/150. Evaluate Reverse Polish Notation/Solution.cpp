class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> op;
        int ans;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+"){
                int temp = op.top();
                op.pop();
                temp += op.top();
                op.pop();
                op.push(temp);
            }else if(tokens[i] == "-"){
                int temp = op.top();
                op.pop();
                temp = op.top() - temp;
                op.pop();
                op.push(temp);
            }else if(tokens[i] == "/"){
                int temp = op.top();
                op.pop();
                temp = op.top() / temp;
                op.pop();
                op.push(temp);
            }else if(tokens[i] == "*"){
                int temp = op.top();
                op.pop();
                temp *= op.top();
                op.pop();
                op.push(temp);
            }
            else
                op.push(stoi(tokens[i]));
        }

        ans = op.top();
        op.pop();
        return ans;
    }
};