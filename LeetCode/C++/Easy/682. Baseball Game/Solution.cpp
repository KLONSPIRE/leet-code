class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> score;
        int ans = 0;

        for(int i = 0; i < op.size(); i++){
            if(op[i][0] == 'C')
                score.pop();
            else if(op[i][0] == 'D')
                score.push(score.top() * 2);
            else if(op[i][0] == '+'){
                int temp = score.top();
                score.pop();
                temp += score.top();
                score.push(temp - score.top());
                score.push(temp);
            }else
                score.push(stoi(op[i]));
        }

        while(!score.empty()){
            ans += score.top();
            score.pop();
        }

        return ans;
    }
};