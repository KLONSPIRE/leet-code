class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> bill;
        for(int x : bills){
            bill[x]++;
            if(x == 10){
                bill[5]--;
                if(bill[5] < 0)
                    return false;
            }
            if(x == 20){
                bill[5]--;
                if(bill[10] > 0)
                    bill[10]--;
                else
                    bill[5] -= 2;
                if(bill[5] < 0)
                    return false;
            }
        }
        return true;
    }    
};