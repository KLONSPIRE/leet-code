class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> bill;
        for(int x : bills){
            bill[x]++;
            switch(x){
                case 10:
                    bill[5]--;
                    break;
                case 20:
                    bill[5]--;
                    if(bill[10] > 0)
                        bill[10]--;
                    else
                        bill[5] -= 2;
                    break;
            }
        }
        if(bill[5] < 0 || bill[10] < 0)
            return false;
        return true;
    }    
};