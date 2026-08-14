class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 0;
        digits[digits.size() - 1]++;
        if(digits[digits.size() - 1] == 10){
            digits[digits.size() - 1] = 0;
            carry = 1;
            for(int i = digits.size() - 2; i >= 0; i++){
                if(digits[i] == 9 && carry == 1)
                    digits[i] = 0;
                else if(carry == 1){
                    digits[i]++;
                    carry = 0;
                }    
            }
        }

        if(carry == 1)
                ans.push_back(1);
        for(int i = 0; i < digits.size(); i++)
            ans.push_back(digits[i]);

        return ans;
    }
};