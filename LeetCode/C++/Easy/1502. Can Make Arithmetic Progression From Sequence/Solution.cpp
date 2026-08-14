class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() == 2)
            return true;
    
        unordered_map<int, int> tab;
        for(int i = 0; i < arr.size(); i++){
            tab[arr[i]]++;
            if(tab[arr[i]] > 1)
                return false;
        }
    }
};