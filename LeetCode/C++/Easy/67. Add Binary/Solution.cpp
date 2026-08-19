class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ans = "";
        int i = a.size() - 1, j = b.size() - 1;
        while(i >= 0 || j >= 0){
            if(i < a.size()){
                carry += int(a[i] - '0');
                i--;
            }
            if(j < b.size()){
                carry += int(b[j] - '0');
                j--;
            }
            ans.push_back(char((carry % 2) + '0'));
            carry /= 2;
            cout << carry << endl;
        }
        if(carry != 0)
            ans.push_back(char(carry + '0'));

        reverse(ans.begin(), ans.end());
        return ans;
    }
};