class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int n1 = a.size() < b.size() ? a.size() : b.size();
        string ans = "";
        int temp;
        for(int i = 0; i < n1; i++){
            temp = int(a[i] - '0') + int(b[i] - '0') + carry;
            if(temp == 3){
                ans.push_back('1');
                carry = 1;
            }
            else if(temp == 2){
                ans.push_back('0');
                carry = 1;
            }
            else if(temp == 1){
                ans.push_back('1');
                carry = 0;
            }
            else
                ans.push_back('0');
        }

        if(n1 == a.size())
            n2 = b.size();
        else
            n2 = a.size();

        for(int i = n1; i < n2; i++)
        if(carry == 1)
            ans.push_back('1');
        
        reverse(ans.begin(), ans.end());

        return ans;
    }
};