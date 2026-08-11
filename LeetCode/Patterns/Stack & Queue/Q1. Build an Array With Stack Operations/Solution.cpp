class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> nums;
        vector<string> ans;
        int c = 1;
        for(int i = 0; i < target.size(); i++){
            nums.push(c);
            ans.push_back("Push");
            if(nums.top() != target[i] && !nums.empty()){
                nums.pop();
                ans.push_back("Pop");
                i--;
            }
            c++;
        }

        return ans;
    }
};