class Solution {
public:
    string addBinary(string a, string b) {
        long long x = 0, y = 0;
        int pos = 0;
        for(int i = a.size() - 1; i >= 0; i--){
            x += int(a[i] - '0')*pow(2, pos);
            pos++;
        }
        pos = 0;
        for(int i = b.size() - 1; i >= 0; i--){
            y += int(b[i] - '0')*pow(2, pos);
            pos++;
        }
        x += y;
        string ans = "";
        while(x > 1){
            ans.push_back(char(x % 2 + '0'));
            x /= 2;
        }
        if(x != 0)
            ans.push_back('1');
        else
            ans.push_back('0');
        for(int i = 0; i < ans.size()/2; i++){
            char temp = ans[i];
            ans[i] = ans[ans.size() - 1 - i];
            ans[ans.size() - 1 - i] = temp;
        }
        return ans;
    }
};